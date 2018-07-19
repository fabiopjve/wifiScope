unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, TAGraph, TASources, TASeries, Forms, Controls,
  Graphics, Dialogs, StdCtrls, ExtCtrls, Spin, LazSerial,
  lNetComponents, lNet;

type

  { TForm1 }
  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Chart1: TChart;
    Chart1LineSeries1: TLineSeries;
    ComboBox1: TComboBox;
    ComboBox2: TComboBox;
    GroupBox1: TGroupBox;
    GroupBox2: TGroupBox;
    Memo1: TMemo;
    StatusLabel: TLabel;
    tcp: TLTCPComponent;
    SpinEdit1: TSpinEdit;
    Timer1: TTimer;
    udp: TLUDPComponent;
    SaveDialog1: TSaveDialog;
    sr1: TListChartSource;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure ComboBox1Change(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormResize(Sender: TObject);
    procedure tcpConnect(aSocket: TLSocket);
    procedure tcpDisconnect(aSocket: TLSocket);
    procedure tcpError(const msg: string; aSocket: TLSocket);
    procedure tcpReceive(aSocket: TLSocket);
    procedure Timer1Timer(Sender: TObject);
    procedure udpReceive(aSocket: TLSocket);
  private
    procedure sendCommand(command: integer; data: integer);
    function readCommand(command: integer): integer;
    procedure updateXaxis(max: integer; count: integer);
    procedure plotPoint(arrayIndex: integer; value: integer);
  public

  end;

const
  CMD_SET_SAMPLE_RATE = $11;
  CMD_READ_SAMPLE_RATE = $12;
  CMD_READ_SAMPLES = $22;
  CMD_START_SAMPLING = $33;
  CMD_STOP_SAMPLING = $44;
  CMD_SET_TRIGGER_LVL = $55;
  CMD_READ_TRIGGER_LVL = $66;
  CMD_SET_TRIGGER_TYPE = $67;
  CMD_READ_TRIGGER_TYPE = $68;
  CMD_READ_DEBUG_DATA = $DE;
  CMD_ACK = $FF;
var
  Form1: TForm1;
  str: string;
  receiveBuffer : string;
  xAxis : integer;
  triggerLevel: integer;
  triggerMode: integer;
  sampleRate: integer;
  numSamples: integer;
  data: array[0..2000] of integer;
implementation

{$R *.lfm}

{ TForm1 }

procedure saveGraph(name: string);
var
   File1:TextFile;
   ind: integer;
begin
   AssignFile(File1,name);
   Try
     Rewrite(File1);
     for ind:=0 to xAxis do
     begin
       Writeln(File1,intToStr(ind)+','+intToStr(data[ind]));
     end;
     Writeln(File1,'Some Data');//Remember AnsiStrings are case sensitive
   Finally
     CloseFile(File1);
   End;
end;

procedure TForm1.sendCommand(command: integer; data: integer);
var
   strToSend: string;
begin
   if tcp.Connected then
   begin
      strToSend := hexStr(command,2) + hexStr(data,4);
      strToSend := 'WOSC0004'+strToSend+#10;
      tcp.SendMessage(strToSend);
   end;
end;

function TForm1.readCommand(command: integer): integer;
var
   strToSend: string;
begin
   if tcp.Connected then
   begin
      strToSend := 'WOSC0002'+hexStr(command,2)+#10;
      tcp.SendMessage(strToSend);
   end;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  str := '';
  xAxis := 0;
  numSamples := 64;
  sampleRate := 0;
  ComboBox1Change(self);
  //udp.Listen(19743);
end;

procedure TForm1.FormResize(Sender: TObject);
begin
     if Form1.Width<815 then Form1.Width:=815;
     if Form1.Height<500 then Form1.Height:=500;
     //Chart1.Width:=Form1.Width;
     //Chart1.Height:=Form1.Height-90;
end;

procedure TForm1.tcpConnect(aSocket: TLSocket);
begin
  StatusLabel.Caption:='Connected!';
  Timer1.Enabled:=true;
  receiveBuffer := '';
  Button1.Caption:='Disconnect';
  // sends config commands
  sendCommand($11,$08);
end;

procedure TForm1.tcpDisconnect(aSocket: TLSocket);
begin
  StatusLabel.Caption:='Not connected ...';
  Button1.Caption:='Connect';
end;

procedure TForm1.tcpError(const msg: string; aSocket: TLSocket);
begin
  StatusLabel.Caption:='Connection error!';
end;

procedure TForm1.tcpReceive(aSocket: TLSocket);
var
  s: string;
  tempString: string;
  temp, temp2: integer;
  stringIndex, arrayIndex: integer;
  cmd: integer;
  value: integer;
  error: integer;
  len : integer;
  data: array[1..512] of integer;
  currentCMD: integer;
begin
  if tcp.GetMessage(s) > 0 then receiveBuffer := receiveBuffer + s;
  if (Pos('WOSC',receiveBuffer)>0) then
  begin
    stringIndex := Pos('WOSC',receiveBuffer);
    tempString := '0x'+Copy(receiveBuffer,stringIndex+4,4);
    Val(tempString,temp,error);
    len := 0;
    if error=0 then len := temp else exit;
    // get command
    tempString := '0x'+Copy(receiveBuffer,stringIndex+8,2);
    Val(tempString,currentCMD,error);
    if error<>0 then
    begin
      Delete(receiveBuffer,1,stringIndex+10);
      exit;
    end;
    temp2 := Length(receiveBuffer)-10;
    // if current packet length is less than packet length field we exit and wait for more data
    if temp2<len then exit;
    // now decode the remainder of string
    stringIndex := Pos('WOSC',receiveBuffer)+10;
    temp2 := len;
    arrayIndex := 1;
    if currentCMD = CMD_READ_DEBUG_DATA then
    begin
      // if we have a debug command, append data to memo, delete string and return
      memo1.Append(Copy(receiveBuffer,stringIndex,temp2));
      Delete(receiveBuffer,1,stringIndex+temp2);
      exit;
    end;
    // we have a reply for a command
    while len>0 do
    begin
      tempString := '0x'+Copy(receiveBuffer,stringIndex,4);
      Val(tempString,temp,error);
      if error=0 then data[arrayIndex]:=temp;
      len := len-4;
      stringIndex := stringIndex + 4;
      inc(arrayIndex);
    end;
    if temp2=4 then
    begin
      case currentCMD of
        CMD_READ_SAMPLE_RATE : sampleRate:= data[1];
        CMD_READ_TRIGGER_LVL : triggerLevel := data[1];
        CMD_READ_TRIGGER_TYPE : triggerMode := data[1];
      end;
    end else
    begin
      numSamples := temp2 div 4;
      updateXaxis(numSamples,sampleRate);
      sr1.Clear;
      for arrayIndex:=1 to (temp2 div 4) do
      begin
        plotPoint(arrayIndex,data[arrayIndex]);
      end;
    end;
    Delete(receiveBuffer,1,Pos('WOSC',receiveBuffer)+10+temp2);
  end else
  begin
    receiveBuffer := '';
  end;
end;

procedure TForm1.Timer1Timer(Sender: TObject);
begin
  if tcp.Connected then begin
     // these are periodic commands
     readCommand(CMD_READ_SAMPLES);
  end;
end;

procedure TForm1.udpReceive(aSocket: TLSocket);
var
   rcv : array[1..64] of byte;
   size : integer;
   index : integer;
   tmp: string;
begin
   tmp := '';
   size := aSocket.Get(rcv,64);
   tmp:= 'Size='+intToStr(size);
   index := 1;
   while (size>0) do
   begin
        tmp := tmp + ' ' + intToStr(rcv[index]);
        dec(size);
        inc(index);
   end;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
     if SaveDialog1.Execute then
     begin
          saveGraph(SaveDialog1.FileName);
     end;
end;

procedure TForm1.updateXaxis(max: integer; count: integer);
begin
  sampleRate := count;
  numSamples := max;
  case count of
    0 : begin
          Chart1.BottomAxis.Range.Max:=max/10;
          Chart1.BottomAxis.Title.Caption:='seconds';
        end;
    1 : begin
          Chart1.BottomAxis.Range.Max:=max*10;
          Chart1.BottomAxis.Title.Caption:='milliseconds';
        end;
    2 : begin
          Chart1.BottomAxis.Range.Max:=max;
          Chart1.BottomAxis.Title.Caption:='milliseconds';
        end;
    3 : begin
          Chart1.BottomAxis.Range.Max:=max*100;
          Chart1.BottomAxis.Title.Caption:='microseconds';
        end;
  end;
end;

procedure TForm1.plotPoint(arrayIndex: integer; value: integer);
begin
  case sampleRate of
    0 : sr1.Add((arrayIndex-1)/10,value);
    1 : sr1.Add((arrayIndex-1)*10,value);
    2 : sr1.Add((arrayIndex-1),value);
    3 : sr1.Add((arrayIndex-1)*100,value);
  end;
end;

procedure TForm1.ComboBox1Change(Sender: TObject);
begin
  updateXaxis(numSamples,ComboBox1.ItemIndex);
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
     if tcp.Connected then begin
        Timer1.Enabled:=false;
        tcp.Disconnect();
        Button1.Caption:='Connect';
        StatusLabel.Caption:='Not connected ...';
     end else begin
          tcp.Connect('localhost',5555);
     end;
end;
end.


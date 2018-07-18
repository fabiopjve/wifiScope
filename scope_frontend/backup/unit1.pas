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
    StatusLabel: TLabel;
    tcp: TLTCPComponent;
    SpinEdit1: TSpinEdit;
    Timer1: TTimer;
    udp: TLUDPComponent;
    SaveDialog1: TSaveDialog;
    sr1: TListChartSource;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormResize(Sender: TObject);
    procedure tcpConnect(aSocket: TLSocket);
    procedure tcpDisconnect(aSocket: TLSocket);
    procedure tcpReceive(aSocket: TLSocket);
    procedure Timer1Timer(Sender: TObject);
    procedure udpReceive(aSocket: TLSocket);

    //procedure Serial1RxData(Sender: TObject);
  private
    procedure sendCommand(command: integer; data: integer);
    function readCommand(command: integer): integer;
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
  CMD_ACK = $FF;
var
  Form1: TForm1;
  str: string;
  receiveBuffer : string;
  xAxis : integer;
  currentCMD: integer;
  triggerLevel: integer;
  triggerMode: integer;
  sampleRate: integer;
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
      strToSend := 'WOSC'+hexStr(Length(StrToSend),4)+strToSend;
      tcp.SendMessage(strToSend);
   end;
end;

function TForm1.readCommand(command: integer): integer;
var
   strToSend: string;
begin
   if tcp.Connected then
   begin
      strToSend := hexStr(command,2);
      strToSend := 'WOSC'+hexStr(Length(StrToSend),4)+strToSend;
      tcp.SendMessage(strToSend);
   end;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  str := '';
  xAxis := 0;
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
begin
  if tcp.GetMessage(s) > 0 then receiveBuffer := receiveBuffer + s;
  if (Pos('WOSC',receiveBuffer)>0) then
  begin
    tempString := '0x'+Copy(receiveBuffer,5,4);
    Val(tempString,temp,error);
    len := 0;
    if error=0 then len := temp else exit;
    tempString := '0x'+Copy(receiveBuffer,9,2);
    Val(tempString,temp,error);
    if error=0 then cmd:=temp else exit;
    temp2 := Length(receiveBuffer)-10;
    if temp2<len then exit;
    stringIndex := 11;
    temp2 := len;
    arrayIndex := 1;
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
      Chart1.AxisList.BottomAxis.Range.Max:=temp2 div 4;
      for arrayIndex:=1 to (temp2 div 4) do
      begin
        sr1.Clear;
        sr1.Add(arrayIndex-1,data[arrayIndex]);
      end;
    end;
    receiveBuffer := '';
  end;
end;

procedure TForm1.Timer1Timer(Sender: TObject);
begin
  if tcp.Connected then begin
     // these are periodic commands
     sendCommand($22,$00);
  end;
end;

procedure TForm1.udpReceive(aSocket: TLSocket);
var
   rcv : array[1..64] of byte;
   size : integer;
   index : integer;
   tmp: string;
begin
     //Memo1.Append();
     //udp.
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
   //Memo1.Append(tmp);
end;





procedure TForm1.Button2Click(Sender: TObject);
begin
     if SaveDialog1.Execute then
     begin
          saveGraph(SaveDialog1.FileName);
     end;
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





{

procedure TForm1.Serial1RxData(Sender: TObject);
var
  tmp: string;
  parse: string;
  idx: integer;
  result: integer;
  ch: Char;
begin
  if Serial1.Active then
  begin
    parse:=Edit2.Text;
    try
       tmp := Serial1.ReadData;
       str := str + tmp;
    finally
    end;
    if Pos( Char(13) ,str)>0 then begin
      idx:=Pos(parse,str);
      if idx>0 then
      begin
        tmp:=str.Substring(idx+parse.Length);
        result:=0;
        idx:=0;
        while true do
        begin
          ch:=tmp.Chars[idx];
          if ch<'0' then break;
          if ch>'9' then break;
          if result<>0 then result := result*10;
          result := result + (ord(ch)-ord('0'));
          inc(idx);
        end;
        if (result<4096) and (xAxis<2000) then
        begin
          sr1.Add(xAxis,result);
          data[xAxis] := result;
          inc(xAxis);
        end;
        Memo1.Append(str+' -> '+intToStr(result));
        Label2.Caption:=intToStr(result);
      end;
      str:='';
    end;
  end;
end;
}
end.

unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, TAGraph, TASources, TASeries, TAStyles, Forms,
  Controls, Graphics, Dialogs, StdCtrls, ExtCtrls, Spin, LazSerial,
  lNetComponents, lNet, LMessages;

type

  { TForm1 }
  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Chart1: TChart;
    Chart1ConstantLine1: TConstantLine;
    Chart1LineSeries1: TLineSeries;
    CBHorizontal: TComboBox;
    CBTriggerMode: TComboBox;
    serverIP: TEdit;
    GroupBox1: TGroupBox;
    GroupBox2: TGroupBox;
    Memo1: TMemo;
    TriggerFrequencyLabel: TStaticText;
    StatusLabel: TLabel;
    tcp: TLTCPComponent;
    SETriggerLevel: TSpinEdit;
    Timer1: TTimer;
    udp: TLUDPComponent;
    SaveDialog1: TSaveDialog;
    sr1: TListChartSource;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure CBHorizontalChange(Sender: TObject);
    procedure CBTriggerModeChange(Sender: TObject);
    procedure Chart1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormKeyPress(Sender: TObject; var Key: char);
    procedure FormResize(Sender: TObject);
    procedure SETriggerLevelChange(Sender: TObject);
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
    procedure GUIchange();
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

procedure TForm1.GUIchange();
var
  value: integer;
  error: integer;
begin
   updateXaxis(numSamples,CBHorizontal.ItemIndex);
   // sends set sample rate command
   sendCommand(CMD_SET_SAMPLE_RATE,sampleRate);
   if (CBTriggerMode.ItemIndex = 1) then
   begin
     // sends set trigger type command
     sendCommand(CMD_SET_TRIGGER_TYPE,$01);
   end else
   begin
     // sends set trigger type command
     sendCommand(CMD_SET_TRIGGER_TYPE,$00);
   end;
   // now checks trigger level
   Val(SETriggerLevel.Text,value,error);
   if error <> 0 then
   begin
      SETriggerLevel.Text := '0';
   end;
   if value>3300 then value := 3300;
   if value<0 then value := 0;
   Chart1ConstantLine1.Position:= value/1000;
   SETriggerLevel.Text := intToStr(value);

   value := value * 124091;
   triggerLevel := value div 100000;
   sendCommand(CMD_SET_TRIGGER_LVL,triggerLevel);
end;

procedure TForm1.SETriggerLevelChange(Sender: TObject);
begin
   GUIchange();
end;

procedure TForm1.CBHorizontalChange(Sender: TObject);
begin
   sr1.Clear;
   GUIchange();
end;

procedure TForm1.CBTriggerModeChange(Sender: TObject);
begin
   GUIchange();
end;

procedure TForm1.Chart1Click(Sender: TObject);
begin
   Chart1LineSeries1.ShowPoints:= not Chart1LineSeries1.ShowPoints;
end;


procedure TForm1.FormCreate(Sender: TObject);
begin
  str := '';
  xAxis := 0;
  numSamples := 64;
  sampleRate := 0;
  CBHorizontalChange(self);
end;

procedure TForm1.FormKeyPress(Sender: TObject; var Key: char);
begin

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
  GUIchange();
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
  freqStart, freqEnd: integer;
  data: array[1..1024] of integer;
  currentCMD: integer;
  frequency : double;
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
      memo1.Append(Copy(receiveBuffer,stringIndex,temp2-1));
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
      freqStart := -1;
      freqEnd := -1;
      updateXaxis(numSamples,sampleRate);
      sr1.Clear;
      for arrayIndex:=1 to numSamples do
      begin
        plotPoint(arrayIndex,data[arrayIndex]);
        if arrayIndex>1 then
        begin
          if (data[arrayIndex]>=triggerLevel) and (data[arrayIndex-1]<triggerLevel) and (freqStart = -1) then freqStart := arrayIndex;
          if (freqStart <> -1) and (data[arrayIndex]<triggerLevel) and (freqEnd = -1) then freqEnd := arrayIndex;
        end;
      end;
      // now we try to calculate trigger frequency
      if (freqStart=-1) or (freqEnd=-1) then
      begin
        // we can't calculate trigger frequency
        TriggerFrequencyLabel.Caption:='F = ---- Hz';
      end else
      begin
        // calculate frequency
        case sampleRate of
          0 : frequency := 1/((freqEnd-freqStart)*0.0025*2);
          1 : frequency := 1/((freqEnd-freqStart)*0.0005*2);
          2 : frequency := 1/((freqEnd-freqStart)*0.00025*2);
          3 : frequency := 1/((freqEnd-freqStart)*0.000125*2);
          4 : frequency := 1/((freqEnd-freqStart)*0.00005*2);
          5 : frequency := 1/((freqEnd-freqStart)*0.000025*2);
          6 : frequency := 1/((freqEnd-freqStart)*0.00001*2);
          7 : frequency := 1/((freqEnd-freqStart)*0.000005*2);
          8 : frequency := 1/((freqEnd-freqStart)*0.0000025*2);
          9 : frequency := 1/((freqEnd-freqStart)*0.000001*2);
        end;
        TriggerFrequencyLabel.Caption:='F = '+FormatFloat('#0.00',frequency)+'Hz';
        TriggerFrequencyLabel.Visible:= true;
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
  //serverIP.Text:=aSocket.LocalAddress;
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
          Chart1.BottomAxis.Range.Max:=295;
          Chart1.BottomAxis.Range.Min:=-25;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.25|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='milliseconds';
        end;
    1 : begin
          Chart1.BottomAxis.Range.Max:=59;
          Chart1.BottomAxis.Range.Min:=-5;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.2|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='milliseconds';
        end;
    2 : begin
          Chart1.BottomAxis.Range.Max:=29.5;
          Chart1.BottomAxis.Range.Min:=-2.5;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.25|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='milliseconds';
        end;
    3 : begin
          Chart1.BottomAxis.Range.Max:=14.75;
          Chart1.BottomAxis.Range.Min:=-1.25;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.25|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='milliseconds';
        end;
    4 : begin
          Chart1.BottomAxis.Range.Max:=5900;
          Chart1.BottomAxis.Range.Min:=-500;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.2|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='microseconds';
        end;
    5 : begin
          Chart1.BottomAxis.Range.Max:=2950;
          Chart1.BottomAxis.Range.Min:=-250;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.25|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='microseconds';
        end;
    6 : begin
          Chart1.BottomAxis.Range.Max:=1475;
          Chart1.BottomAxis.Range.Min:=-125;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.2|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='microseconds';
        end;
    7 : begin
          Chart1.BottomAxis.Range.Max:=590;
          Chart1.BottomAxis.Range.Min:=-50;
          Chart1.BottomAxis.Intervals.NiceSteps:='0.25|0.5|1.0';
          Chart1.BottomAxis.Title.Caption:='microseconds';
        end;
  end;
end;

procedure TForm1.plotPoint(arrayIndex: integer; value: integer);
var
   multiplier : single;
begin
  if value<0 then value := 0;
  if value>4095 then value := 4095;
  multiplier := (Chart1.BottomAxis.Range.Max-Chart1.BottomAxis.Range.Min)/numSamples;
  sr1.Add((arrayIndex-11)*multiplier,(3.3/4096)*value);
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
     if tcp.Connected then begin
        Timer1.Enabled:=false;
        tcp.Disconnect();
        Button1.Caption:='Connect';
        StatusLabel.Caption:='Not connected ...';
     end else begin
          tcp.Connect(serverIP.Text,5555);
     end;
end;
end.


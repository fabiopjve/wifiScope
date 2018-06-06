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
    GroupBox1: TGroupBox;
    GroupBox2: TGroupBox;
    Label1: TLabel;
    LTCPComponent1: TLTCPComponent;
    SpinEdit1: TSpinEdit;
    udp: TLUDPComponent;
    Memo1: TMemo;
    SaveDialog1: TSaveDialog;
    sr1: TListChartSource;
    procedure Button2Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormResize(Sender: TObject);
    procedure udpReceive(aSocket: TLSocket);
    //procedure Serial1RxData(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;
  str: string;
  xAxis: integer;
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

procedure TForm1.FormCreate(Sender: TObject);
begin
  str := '';
  xAxis := 0;
  udp.Listen(19743);
end;

procedure TForm1.FormResize(Sender: TObject);
begin
     if Form1.Width<815 then Form1.Width:=815;
     if Form1.Height<500 then Form1.Height:=500;
     //Chart1.Width:=Form1.Width;
     //Chart1.Height:=Form1.Height-90;
end;

procedure TForm1.udpReceive(aSocket: TLSocket);
var
   rcv : array[1..30] of byte;
   size : integer;
   index : integer;
   tmp: string;
begin
     //Memo1.Append();
     //udp.
   tmp := '';
   size := aSocket.Get(rcv,20);
   tmp:= 'Size='+intToStr(size);
   index := 1;
   while (size>0) do
   begin
        tmp := tmp + ' ' + intToStr(rcv[index]);
        dec(size);
        inc(index);
   end;
   Memo1.Append(tmp);
end;





procedure TForm1.Button2Click(Sender: TObject);
begin
     if SaveDialog1.Execute then
     begin
          saveGraph(SaveDialog1.FileName);
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


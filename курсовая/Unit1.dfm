object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 647
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 88
    Top = 8
    Width = 257
    Height = 257
    Color = clWhite
    ColCount = 10
    DefaultColWidth = 24
    DefaultDrawing = False
    FixedColor = clRed
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    GridLineWidth = 2
    TabOrder = 0
    OnClick = StringGrid1Click
  end
  object Button1: TButton
    Left = 511
    Top = 79
    Width = 75
    Height = 25
    Caption = 'Level 1'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 511
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Level 2'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 511
    Top = 160
    Width = 75
    Height = 25
    Caption = 'Level 3'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 392
    Top = 272
    Width = 41
    Height = 25
    Caption = 'Color'
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button6: TButton
    Left = 464
    Top = 272
    Width = 41
    Height = 25
    Caption = 'X'
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button5: TButton
    Left = 408
    Top = 232
    Width = 75
    Height = 25
    Caption = 'try'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Panel1: TPanel
    Left = 480
    Top = 32
    Width = 106
    Height = 25
    TabOrder = 7
  end
  object Memo1: TMemo
    Left = 31
    Top = 8
    Width = 51
    Height = 289
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Trebuchet MS'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 8
  end
  object Memo2: TMemo
    Left = 88
    Top = 271
    Width = 273
    Height = 96
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Trebuchet MS'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 9
    StyleElements = [seClient, seBorder]
  end
end

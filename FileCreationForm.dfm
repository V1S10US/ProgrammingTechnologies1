object FileCreator: TFileCreator
  Left = 0
  Top = 0
  Caption = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1099#1081' '#1092#1072#1081#1083
  ClientHeight = 129
  ClientWidth = 374
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 64
    Width = 170
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1085#1072#1079#1074#1072#1085#1080#1077' '#1085#1086#1074#1086#1075#1086' '#1092#1072#1081#1083#1072':'
  end
  object Edit1: TEdit
    Left = 216
    Top = 61
    Width = 121
    Height = 21
    TabOrder = 0
    TextHint = 'filename.bin'
  end
  object CreateButton: TButton
    Left = 72
    Top = 96
    Width = 75
    Height = 25
    Caption = #1057#1086#1079#1076#1072#1090#1100
    TabOrder = 1
    OnClick = CreateButtonClick
  end
  object CancelButton: TButton
    Left = 200
    Top = 96
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    OnClick = CancelButtonClick
  end
end

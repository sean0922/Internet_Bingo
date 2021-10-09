object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 393
  ClientWidth = 397
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 42
    Top = 8
    Width = 31
    Height = 13
    Caption = 'Label1'
    Visible = False
  end
  object Label2: TLabel
    Left = 8
    Top = 8
    Width = 28
    Height = 13
    Caption = #30446#21069':'
    Visible = False
  end
  object Label3: TLabel
    Left = 296
    Top = 8
    Width = 6
    Height = 13
    Caption = '0'
    Visible = False
  end
  object Label4: TLabel
    Left = 202
    Top = 8
    Width = 88
    Height = 13
    Caption = #23565#25163#20197#36899#32218#26781#25976':'
    Visible = False
  end
  object Memo1: TMemo
    Left = 376
    Top = 64
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssBoth
    TabOrder = 0
    Visible = False
    OnChange = Memo1Change
  end
  object ComboBox1: TComboBox
    Left = 400
    Top = 8
    Width = 145
    Height = 21
    TabOrder = 1
    Text = 'ComboBox1'
    Visible = False
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 374
    Width = 397
    Height = 19
    Panels = <>
    ExplicitTop = 279
    ExplicitWidth = 586
  end
  object Memo2: TMemo
    Left = 376
    Top = 152
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo2')
    TabOrder = 3
    Visible = False
  end
  object MainMenu1: TMainMenu
    Left = 376
    Top = 224
    object Play1: TMenuItem
      Caption = 'Play'
      object N1: TMenuItem
        Caption = 'Creat_Room'
        OnClick = N1Click
      end
      object N2: TMenuItem
        Caption = 'Join_The_Room'
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = 'Leave'
        OnClick = N3Click
      end
      object N4: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = 'Exit'
        OnClick = Exit1Click
      end
    end
    object Debug1: TMenuItem
      Caption = 'Debug'
      object OpenDebugWindow1: TMenuItem
        Caption = 'Open Debug Window'
        OnClick = OpenDebugWindow1Click
      end
    end
  end
  object ClientSocket1: TClientSocket
    Active = False
    ClientType = ctNonBlocking
    Port = 1024
    OnConnect = ClientSocket1Connect
    OnDisconnect = ClientSocket1Disconnect
    OnRead = ClientSocket1Read
    OnError = ClientSocket1Error
    Left = 440
    Top = 224
  end
  object ServerSocket1: TServerSocket
    Active = False
    Port = 1024
    ServerType = stNonBlocking
    OnAccept = ServerSocket1Accept
    OnClientConnect = ServerSocket1ClientConnect
    OnClientDisconnect = ServerSocket1ClientDisconnect
    OnClientRead = ServerSocket1ClientRead
    OnClientError = ServerSocket1ClientError
    Left = 488
    Top = 224
  end
  object IdIPWatch1: TIdIPWatch
    Active = False
    HistoryFilename = 'iphist.dat'
    Left = 552
    Top = 232
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 440
    Top = 304
  end
  object Timer2: TTimer
    Enabled = False
    OnTimer = Timer2Timer
    Left = 512
    Top = 296
  end
end

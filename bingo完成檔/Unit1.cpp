//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"

#define CLIENT_MAX 5//the maxmum of client
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TButton *btn[5][5];
bool yck=false;//按完後不能重複案
String strHost;
bool blnServer;
String newClient="";
String ClientHostName="";
String ServerName="";
bool fgConnectState;
int totalline=0;//連線幾條
bool printsc=false;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	randomize();
	fgConnectState = false;
	N3->Enabled=false;
	Form1->Caption="Local host"+IdIPWatch1->LocalIP();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N1Click(TObject *Sender)
{
	PACKET pkg;
	String strPkg;

	Form1->Caption="I am Server"+IdIPWatch1->LocalIP();
	N1->Checked = !N1->Checked;
	ComboBox1->Clear();

	if(N1->Checked)
	{
		ClientSocket1->Active = false;
		try
		{
			ServerSocket1->Active = true;
		}
		catch(...)
		{
			N1->Checked=false;
			ShowMessage("Be a Server failuer");
			return;
        }
		ServerName="Server-"+IdIPWatch1->LocalIP();
		StatusBar1->SimpleText="Status: Chat Server Listening....";
		N2->Enabled=false;
		Form2->Memo1->Lines->Add("Server: "+ServerName+", socket:"+
		IntToStr(ServerSocket1->Socket->SocketHandle));
        ComboBox1->Enabled=true;
	}
	else
	{
		if(ServerSocket1->Active)
		{
			//build packet
			pkg.ID="CHAT";
			pkg.MainFunc=1;
			pkg.SubFunc=2;
			pkg.MsgLength=0;
			pkg.Msg="";
			pkg.separation="#";
			pkg.EndSymbol="@";
			pkg.Host=ServerName;

			strPkg=AssemblePacket(pkg);
			for(int i=0;i<ServerSocket1->Socket->ActiveConnections;i++)
			{
				ServerSocket1->Socket->Connections[i]->SendText(strPkg);
				ServerSocket1->Active = true;
            }
		}
		N2->Enabled=true;
        StatusBar1->SimpleText="Status: Chat Server Close";
	}
	blnServer=true;
    Form1->Tag=0;
}
//---------------------------------------------------------------------------
String TForm1:: AssemblePacket(PACKET pkg)
{
	String str="",tmp;

	if(pkg.ID.Length()!=3)
	{
		ShowMessage("檔頭錯誤");
		return NULL;
	}
	else
	{
		str+=pkg.ID;
	}
	//-----------------------host----------------------
	if(pkg.Host.Length()==0)
	{

		return NULL;
	}
	else
	{
		str+=pkg.Host;
		str+=pkg.separation;
	}
	//----------------------------main-------------------------------
	str+=pkg.MainFunc;
	//--------------------------------------sub function---------------
	str+=pkg.SubFunc;
	//-------------msg length-----------------------------------------
	tmp =IntToStr(pkg.MsgLength);
	if(tmp.Length()>3)
	{
		ShowMessage("msg長度紀錄error");
		return NULL;
	}
	else
	{
		for(int i=0;i<3-tmp.Length();i++)
		{
			str+="0";
		}
        str+=tmp;
    }
	//---------------------------message------------------------------------------
	if(pkg.MsgLength != pkg.Msg.Length())
	{
		ShowMessage("msg length error");
		return NULL;
	}
	else
	{
		str+=pkg.Msg;
		str+=pkg.EndSymbol;
	}

    return str;
}


void __fastcall TForm1::OpenDebugWindow1Click(TObject *Sender)
{
	Form2->Top=Form1->Top;
	Form2->Left=Left+Form1->Width+10;
	Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
  	Form1->Caption="I am Client";

	if(ClientSocket1->Active)
		ClientSocket1->Active=false;
	strHost="127.0.0.1";

	if(InputQuery("Chat connection","Chat Server IP:",strHost))
	{
		if(strHost.Length()>0)
		{
			ClientSocket1->Host=strHost;

			ClientSocket1->Active=true;
			//Timer1->Enabled=true;

			N1->Checked=false;
			N3->Enabled=false;
			blnServer=false;

			ComboBox1->Enabled=false;
            Label1->Caption="對手選擇中。。。。";
        }
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::N3Click(TObject *Sender)
{
    destroy_btn();
	PACKET pkg;
	String strPkg;

	if(blnServer)
	{
		return;
	}

	pkg.ID="PON";
	pkg.MainFunc=1;
	pkg.SubFunc=2;
	pkg.MsgLength=0;
	pkg.Msg="";
	pkg.separation="@";
	pkg.EndSymbol="#";
	pkg.Host=ClientHostName;


	strPkg=AssemblePacket(pkg);

	ClientSocket1->Socket->SendText(strPkg);
	ClientSocket1->Active=false;

	Memo2->Lines->Add("["+Time()+"] Dissconnect.");
	N1->Checked = false;
	N2->Checked=false;
	N3->Checked=false;

	fgConnectState=false;
	Memo2->Visible=false;
    ShowMessage("玩家已離開了。。。");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
Timer1->Enabled=false;
	ShowMessage("Time out");
	ClientSocket1->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Connect(TObject *Sender, TCustomWinSocket *Socket)

{
	Timer1->Enabled=false;
	Label1->Visible=true;
	Label2->Visible=true;
	Label3->Visible=true;
	Label4->Visible=true;
	StatusBar1->SimpleText="Status: Connect to"+Socket->RemoteHost;
	fgConnectState=true;
	Memo2->Clear();
	Memo2->Visible=true;

	N1->Enabled=false;
	N2->Enabled=false;
	N3->Enabled=true;

	ClientSocket1->ClientType=ctNonBlocking;
    set_but();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientSocket1Disconnect(TObject *Sender, TCustomWinSocket *Socket)

{
    destroy_btn();
	Timer1->Enabled=false;
	StatusBar1->SimpleText="server disconnect";
	fgConnectState=false;
	Memo2->Visible=false;

	N1->Enabled=true;
	N3->Enabled=false;
	N2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket)

{
	pPACKET pPkg;
	String strPacket;
	if(!fgConnectState)
	{
		return;
	}

	strPacket=Socket->ReceiveText();
	Form2->Memo1->Lines->Add("["+Time()+"]"+strPacket);

	pPkg=DisassemblePacket(strPacket);

	if(pPkg==NULL)
	{
		Memo1->Lines->Add("Packet error");
		return;
	}
	ParsePacket(pPkg);
	Form1->Memo1->Lines->Add("先執行");


}
//---------------------------------------------------------------------------
pPACKET TForm1::DisassemblePacket(String strPkg)
{
   PACKET tmpPkg;
   pPACKET pPkg;
   int separator;
   String strTmp;

   Form2->Memo1->Lines->Add("===== Diassemble packet ====");

   if(strPkg[strPkg.Length()]!='#')
   {
	  Form2->Memo1->Lines->Add("Packet error 1");
	  return NULL;
   }

   if(strPkg.Pos("@")<=0)
   {
	  Form2->Memo1->Lines->Add("Packet error 2");
	  return NULL;
   }

   if(strPkg.SubString(1,3)!="PON")
   {
	  Form2->Memo1->Lines->Add("Packet error 3");
	  return NULL;
   }

   //---------------------------------------
   tmpPkg.ID=strPkg.SubString(1,3);

   separator= strPkg.Pos("@");
   tmpPkg.Host=strPkg.SubString(4,separator-4);
   tmpPkg.separation=strPkg.SubString(separator,1);

   tmpPkg.MainFunc=strPkg.SubString(separator+1,1);
   tmpPkg.SubFunc=strPkg.SubString(separator+2,1);

   //-----------------------------------------
   strTmp=strPkg.SubString(separator+3,3);
   try{
	   tmpPkg.MsgLength=StrToInt(strTmp);
   }
   catch(...)
   {
	  Form2->Memo1->Lines->Add("Packet error 4");
	  return NULL;
   }

   if(tmpPkg.MsgLength<0)
   {
	  Form2->Memo1->Lines->Add("Packet error 5");
	  return NULL;
   }

   strTmp=strPkg.SubString(separator+6,strPkg.Length()-separator-6);
   if(strTmp.Length()!=tmpPkg.MsgLength)
   {
	  Form2->Memo1->Lines->Add("Packet error 6");
	  return NULL;
   }
   else
	 tmpPkg.Msg=strTmp;

   pPkg=new PACKET;
   pPkg->ID=tmpPkg.ID;
   pPkg->Host=tmpPkg.Host;
   pPkg->separation=tmpPkg.separation;
   pPkg->MainFunc=tmpPkg.MainFunc;
   pPkg->SubFunc=tmpPkg.SubFunc;
   pPkg->MsgLength=tmpPkg.MsgLength;
   pPkg->Msg=tmpPkg.Msg;
   pPkg->EndSymbol=tmpPkg.EndSymbol;

   return pPkg;

}

void __fastcall TForm1::Exit1Click(TObject *Sender)
{
	ServerSocket1->Close();
	ClientSocket1->Close();

	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Error(TObject *Sender, TCustomWinSocket *Socket,
          TErrorEvent ErrorEvent, int &ErrorCode)
{
Memo2->Lines->Add("Error:"+strHost);
    ErrorCode = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1Accept(TObject *Sender, TCustomWinSocket *Socket)

{
	fgConnectState=true;
	Memo2->Visible=true;

    ReflashClientList();
}
//---------------------------------------------------------------------------
void TForm1::ParsePacket(pPACKET pPkg)
{
	int mFunc,sFunc;

	mFunc=StrToInt(pPkg->MainFunc);
	sFunc=StrToInt(pPkg->SubFunc);

	switch(mFunc)
	{
		case 1://get a new name
			switch(sFunc)
			{
				case 1:
					ClientHostName=pPkg->Msg;
					Form2->Memo1->Lines->Add("New name:"+ClientHostName);
					Form1->Caption=ClientHostName;
					break;
				case 2:
				if(blnServer)
					Form2->Memo1->Lines->Add("["+Time()+"]Client'"+pPkg->Host+"'requests to disconnect.");
				else
					Form2->Memo1->Lines->Add("["+Time()+"]Server'"+pPkg->Host+"'disconnected.");
				break;

			}
		case 2:
        	Label1->Caption="請你選擇。。。";
			yck=true;
            if(pPkg->MsgLength<3)
			{
				for(int i=0;i<25;i++)
				{
					if(btn[i%5][i/5]->Caption==pPkg->Msg)
					{
						btn[i%5][i/5]->Caption="click";
						btn[i%5][i/5]->Enabled=false;
					}
				}
			}
			if(printsc==true)
			{
				 Label3->Caption= IntToStr(sFunc);
			}
			else
			{
				printsc=true;
                Label3->Caption= "";
            }

			check_line();
			Memo1->Lines->Add("["+pPkg->Host+"]:"+pPkg->Msg+"沒錯"); //接收並顯示的地方
			Memo1->Lines->Add("["+pPkg->Host+"]:"+"對方以連"+IntToStr(sFunc)+"條線"); //接收並顯示的地方
			//Memo1->Lines->Add(pPkg->MsgLength); //接收並顯示的地方
			if((mFunc==2 && sFunc>=3) || (mFunc==2 && totalline>=3))
			{
				PACKET pkg;
                String strPkg;
				pkg.ID="PON";
				if(blnServer)
					pkg.Host=IdIPWatch1->LocalIP();
				else
					pkg.Host=ClientHostName;
				pkg.separation="@";
				pkg.MainFunc=3;
				pkg.SubFunc=totalline;
				pkg.MsgLength=001;
				pkg.Msg="0";
				pkg.EndSymbol="#";
				strPkg=AssemblePacket(pkg);

				if (blnServer)
				{
					ServerSocket1->Socket->Connections[0]->SendText(strPkg);
				}
				else // Client
				{
					ClientSocket1->Socket->SendText(strPkg) ;
				}
                if(totalline<3 &&sFunc>=3)
				{
					ShowMessage("輸了");
				}
				if(totalline>=3 && sFunc>=3)
				{
					ShowMessage("平手");
				}
				if(totalline>=3 && sFunc<3)
				{
					ShowMessage("贏了");
				}
				destroy_btn();
			}


			break;
		case 3:
            if(mFunc==3)
			{
				if(totalline<3 &&sFunc>=3)
				{
					ShowMessage("輸了");
                    destroy_btn();
				}
				if(totalline>=3 && sFunc>=3)
				{
					ShowMessage("平手");
					destroy_btn();
				}
				if(totalline>=3 && sFunc<3)
				{
					ShowMessage("贏了");
					destroy_btn();
				}

			}
	   default:
			break;
	}
}
void TForm1::ReflashClientList()
{
	ComboBox1->Clear();

	if(ServerSocket1->Socket->ActiveConnections>1)
		ComboBox1->Items->Add("All");

	for(int i=0;i<ServerSocket1->Socket->ActiveConnections;i++)
	{
		ComboBox1->Items->Add(ServerSocket1->Socket->Connections[i]->RemoteAddress+"-"+
					IntToStr(ServerSocket1->Socket->Connections[i]->SocketHandle));
    }

		ComboBox1->ItemIndex=0;
        ComboBox1->Enabled=true;
}

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
Timer2->Enabled=false;
	ReflashClientList();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket)

{
    destroy_btn();
	Form2->Memo1->Lines->Add("'"+Socket->RemoteAddress+"-"+IntToStr(Socket->SocketHandle)+"'disconnection comfirmer") ;
	StatusBar1->SimpleText = "Status: Listening...";

	if(ServerSocket1->Socket->ActiveConnections==1)
	{
		fgConnectState=false;
		Memo2->Visible=false;
	}

	ComboBox1->Enabled=false;
	Timer2->Enabled=true;
    ShowMessage("玩家已離開了。。。");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1Change(TObject *Sender)
{
//client斷線後
	Timer2->Enabled=false;
	ReflashClientList();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientError(TObject *Sender, TCustomWinSocket *Socket,
          TErrorEvent ErrorEvent, int &ErrorCode)
{
StatusBar1->SimpleText="Error from Client Socket.";
    ReflashClientList();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket)

{
	pPACKET pPkg;
	String strPacket;

	strPacket=Socket->ReceiveText();
	Form2->Memo1->Lines->Add("["+Time()+"]"+strPacket);

	pPkg=DisassemblePacket(strPacket);
	if(pPkg==NULL)
	{
		Memo1->Lines->Add("Packet  error");
		return;
	}

	ParsePacket(pPkg);



}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientConnect(TObject *Sender, TCustomWinSocket *Socket)

{
	PACKET pkg;
	String strPkg;
	int clientNum;
	Label1->Visible=true;
	Label2->Visible=true;
	Label3->Visible=true;
	Label4->Visible=true;
	clientNum = ServerSocket1->Socket->ActiveConnections;

	if(clientNum>CLIENT_MAX)
	{
		Form2->Memo1->Lines->Add("已達連線最大數量");
		Socket->Close();
		return;
	}

	StatusBar1->SimpleText="Status:  Connect from "+Socket->RemoteHost+
				"socket ID: "+IntToStr(Socket->SocketHandle);

	if(!CheckClients(Socket))//new connection
	{
		pkg.ID="PON";
		pkg.Host=ServerName;
		pkg.separation="@";
		pkg.MainFunc=1; //新連線
		pkg.SubFunc=1;  //設定client的名稱
		pkg.MsgLength=newClient.Length();
		pkg.Msg=newClient;
		pkg.EndSymbol="#";
		strPkg=AssemblePacket(pkg);

		ServerSocket1->Socket->Connections[clientNum-1]->SendText(strPkg);
		Label1->Caption="對手選擇中。。。";
        set_but();
	}
}
//---------------------------------------------------------------------------
bool TForm1::CheckClients(TCustomWinSocket *Socket)
{
	bool fg;
	int sHnd;
	String hostIP;

	hostIP=Socket->RemoteAddress;
	sHnd=Socket->SocketHandle;

	newClient=hostIP+"-"+IntToStr(sHnd);
	Form2->Memo1->Lines->Add("New Connection: "+newClient);
	Form2->Memo1->Lines->Add("Connection  number: "+IntToStr(ServerSocket1->Socket->ActiveConnections));

	fg=false;
    return fg;
}
void __fastcall TForm1::whenimgclk(TObject *Sender)//圖片按下時
{
	if(yck==true)
	{
        Label1->Caption="對手選擇中。。。";
    	TButton *btn2;
		btn2=(TButton *)Sender;

		String msg;
		PACKET pkg;
		String strPkg;
		String srtClient;

		pkg.ID="PON";

		if(blnServer)
			pkg.Host=IdIPWatch1->LocalIP();
		else
		 	pkg.Host=ClientHostName;

	   pkg.separation="@";
	   pkg.MainFunc=2; //傳送資料
	   pkg.MsgLength=btn2->Caption.Length();
	   pkg.Msg=btn2->Caption;

	   btn2->Caption="click";
	   check_line();
	   btn2->Enabled=false;
	   pkg.SubFunc=totalline;
	   pkg.EndSymbol="#";
	   strPkg=AssemblePacket(pkg);

		if (blnServer)
		  {
			int index;

			if(ComboBox1->Text=="All") //brocaste
			  {
				for(int i=0;i<ServerSocket1->Socket->ActiveConnections;i++)
				  ServerSocket1->Socket->Connections[i]->SendText(strPkg);
			  }
			else // specific client
			  {
				for(index=0;index<ServerSocket1->Socket->ActiveConnections;index++)
				  {
					srtClient=ServerSocket1->Socket->Connections[index]->RemoteAddress +
							 "-"+IntToStr(ServerSocket1->Socket->Connections[index]->SocketHandle);
					if(ComboBox1->Text==srtClient)
					  break;
				  }

				ServerSocket1->Socket->Connections[index]->SendText(strPkg);
			  }
		  }
		else // Client
			ClientSocket1->Socket->SendText(strPkg) ;

		Memo2->Clear();
		yck=false;

	}
}
void TForm1::set_but()
{
int a[25];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(btn[i][j]!=NULL)
			{
			 ShowMessage("fail");
			 return;
			}

			//a=(rand()%RAND_NUM);
			a[(i*5)+j]=(rand()%(25-1+1))+1;

			for(int t=0;t<((i*5)+j);t++)
			{
				while(a[(i*5)+j]==a[t])
				{
					a[(i*5)+j]=(rand()%(25-1+1))+1;
					t=0;
				}
			}
			btn[i][j]=new TButton(this);
			btn[i][j]->Top=50+(i*60);
			btn[i][j]->Left=20+(j*70);
			//btn[i][j]->Tag=0;//0代表尚未連線
			btn[i][j]->Caption=a[(i*5)+j];//1~25的數字編號
			btn[i][j]->OnClick=whenimgclk;
			btn[i][j]->Height=50;
			btn[i][j]->Width=50;
			btn[i][j]->Parent=this;

		}
	}
}

//---------------------------------------------------------------------------
void TForm1::check_line()
{
    totalline=0;
	for (int i = 0; i < 5; i++)//判斷
	{
		if ((btn[i][0]->Caption == "click") && (btn[i][1]->Caption == "click") && (btn[i][2]->Caption == "click") && (btn[i][3]->Caption == "click") && (btn[i][4]->Caption== "click"))
		{
			totalline+=1;
		}
		if ((btn[0][i]->Caption == "click") && (btn[1][i]->Caption == "click") && (btn[2][i]->Caption == "click") && (btn[3][i]->Caption == "click") && (btn[4][i]->Caption == "click"))
		{
			totalline+=1;
		}
	}
	if ((btn[0][0]->Caption == "click") && (btn[1][1]->Caption == "click") && (btn[2][2]->Caption == "click") && (btn[3][3]->Caption == "click") && (btn[4][4]->Caption== "click"))
	{
		totalline+=1;
	}
	if ((btn[0][4]->Caption == "click") && (btn[1][3]->Caption == "click") && (btn[2][2]->Caption == "click") && (btn[3][1]->Caption == "click") && (btn[4][0]->Caption== "click"))
	{
		totalline+=1;
	}
	Form1->Memo1->Lines->Add("以連線"+IntToStr(totalline)+"條");
	if(totalline>=3)
	{
        Form1->Memo1->Lines->Add("勝利");
	}
}
void TForm1::destroy_btn()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(btn[i][j]==NULL)
			{
			 ShowMessage("無垃圾");
			 return;
			}
			delete btn[i][j];
			btn[i][j]=NULL;
		}
	}
			 ShowMessage("離開了");

	 Label1->Visible=false;
	 Label2->Visible=false;
	 Label3->Visible=false;
	 Label4->Visible=false;
	PACKET pkg;
	String strPkg;

	if(blnServer)
	{
		return;
	}

	pkg.ID="PON";
	pkg.MainFunc=1;
	pkg.SubFunc=2;
	pkg.MsgLength=0;
	pkg.Msg="";
	pkg.separation="@";
	pkg.EndSymbol="#";
	pkg.Host=ClientHostName;


	strPkg=AssemblePacket(pkg);

	ClientSocket1->Socket->SendText(strPkg);
	ClientSocket1->Active=false;

	Memo2->Lines->Add("["+Time()+"] Dissconnect.");
	N1->Checked = false;
	N2->Checked=false;
	N3->Checked=false;

	fgConnectState=false;
	Memo2->Visible=false;
}


void __fastcall TForm1::FormDestroy(TObject *Sender)
{
    destroy_btn();
}
//---------------------------------------------------------------------------


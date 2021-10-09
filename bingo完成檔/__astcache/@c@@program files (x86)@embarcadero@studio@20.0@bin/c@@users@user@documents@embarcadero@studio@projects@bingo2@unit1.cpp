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
	Leave->Enabled=false;
	Form1->Caption="Local host"+IdIPWatch1->LocalIP();
}
//---------------------------------------------------------------------------

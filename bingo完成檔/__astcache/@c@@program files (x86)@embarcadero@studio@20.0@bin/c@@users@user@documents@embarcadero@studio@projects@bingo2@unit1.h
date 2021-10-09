//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdIPWatch.hpp>
#include <System.Win.ScktComp.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
typedef struct _PACKET
{
	String ID;   //4byte
	String Host;        //unfixed length
	String separation;  //1 byte
	String MainFunc;   //1 byte
	String SubFunc;    //1 byte
	int MsgLength;  //3 byte
	String Msg;       //unfixed length
	String EndSymbol;  ////1 byte,@

}PACKET,*pPACKET;

typedef struct _CLIENT_SOCKET
{
	bool active;
	TCustomWinSocket *pSocket;
	String ClientID;
}CLIENTSOCKET,*pCLIENTSOCKET;
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Play1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *Exit1;
	TMenuItem *Debug1;
	TMenuItem *OpenDebugWindow1;
	TClientSocket *ClientSocket1;
	TServerSocket *ServerSocket1;
	TMemo *Memo1;
	TIdIPWatch *IdIPWatch1;
	TTimer *Timer1;
	TTimer *Timer2;
	TComboBox *ComboBox1;
	TStatusBar *StatusBar1;
	TButton *Button1;
	TButton *Button2;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
    	String AssemblePacket(PACKET pkg);
	pPACKET DisassemblePacket(String);
	void ShowPacket(PACKET);
	void ShowPacket(pPACKET);
	void ParsePacket(pPACKET);
	void ReflashClientList();
	bool CheckClients(TCustomWinSocket *);
	void __fastcall whenimgclk(TObject *Sender);
	void check_line();
	void sent_msg();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

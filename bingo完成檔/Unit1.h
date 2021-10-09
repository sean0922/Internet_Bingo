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
	TMemo *Memo2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall OpenDebugWindow1Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall ClientSocket1Connect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ClientSocket1Disconnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall ClientSocket1Error(TObject *Sender, TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
	void __fastcall ServerSocket1Accept(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall Memo1Change(TObject *Sender);
	void __fastcall ServerSocket1ClientError(TObject *Sender, TCustomWinSocket *Socket,
          TErrorEvent ErrorEvent, int &ErrorCode);
	void __fastcall ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ServerSocket1ClientConnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall FormDestroy(TObject *Sender);






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
	void check_line();//判斷連線
	void sent_msg();
	void set_but();//設定25個賓果
	void destroy_btn();

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

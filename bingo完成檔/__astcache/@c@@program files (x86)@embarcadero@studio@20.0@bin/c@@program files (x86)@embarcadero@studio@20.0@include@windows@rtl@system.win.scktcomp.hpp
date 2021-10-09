// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Win.ScktComp.pas' rev: 33.00 (Windows)

#ifndef System_Win_ScktcompHPP
#define System_Win_ScktcompHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.WinSock.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.SyncObjs.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Win
{
namespace Scktcomp
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ESocketError;
struct TCMSocketMessage;
struct TCMLookupComplete;
class DELPHICLASS TCustomWinSocket;
class DELPHICLASS TClientWinSocket;
class DELPHICLASS TServerClientWinSocket;
class DELPHICLASS TServerWinSocket;
class DELPHICLASS TServerAcceptThread;
class DELPHICLASS TServerClientThread;
class DELPHICLASS TAbstractSocket;
class DELPHICLASS TCustomSocket;
class DELPHICLASS TWinSocketStream;
class DELPHICLASS TClientSocket;
class DELPHICLASS TCustomServerSocket;
class DELPHICLASS TServerSocket;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ESocketError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESocketError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESocketError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESocketError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESocketError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESocketError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESocketError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESocketError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESocketError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESocketError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESocketError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESocketError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESocketError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESocketError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TCMSocketMessage
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeInt Socket;
	System::Word SelectEvent;
	System::Word SelectError;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller SelectEventErrorFiller;
#endif /* _WIN64 */
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMLookupComplete
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt LookupHandle;
	System::Word AsyncBufLen;
	System::Word AsyncError;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller AsyncBufLenErrorFiller;
#endif /* _WIN64 */
	NativeInt Result;
};


enum DECLSPEC_DENUM TServerType : unsigned char { stNonBlocking, stThreadBlocking };

enum DECLSPEC_DENUM TClientType : unsigned char { ctNonBlocking, ctBlocking };

enum DECLSPEC_DENUM TAsyncStyle : unsigned char { asRead, asWrite, asOOB, asAccept, asConnect, asClose };

typedef System::Set<TAsyncStyle, TAsyncStyle::asRead, TAsyncStyle::asClose> TAsyncStyles;

enum DECLSPEC_DENUM TSocketEvent : unsigned char { seLookup, seConnecting, seConnect, seDisconnect, seListen, seAccept, seWrite, seRead };

enum DECLSPEC_DENUM TLookupState : unsigned char { lsIdle, lsLookupAddress, lsLookupService };

enum DECLSPEC_DENUM TErrorEvent : unsigned char { eeGeneral, eeSend, eeReceive, eeConnect, eeDisconnect, eeAccept, eeLookup };

typedef void __fastcall (__closure *TSocketEventEvent)(System::TObject* Sender, TCustomWinSocket* Socket, TSocketEvent SocketEvent);

typedef void __fastcall (__closure *TSocketErrorEvent)(System::TObject* Sender, TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode);

typedef void __fastcall (__closure *TGetSocketEvent)(System::TObject* Sender, NativeInt Socket, TServerClientWinSocket* &ClientSocket);

typedef void __fastcall (__closure *TGetThreadEvent)(System::TObject* Sender, TServerClientWinSocket* ClientSocket, TServerClientThread* &SocketThread);

typedef void __fastcall (__closure *TSocketNotifyEvent)(System::TObject* Sender, TCustomWinSocket* Socket);

class PASCALIMPLEMENTATION TCustomWinSocket : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	NativeInt FSocket;
	bool FConnected;
	System::Classes::TStream* FSendStream;
	bool FDropAfterSend;
	HWND FHandle;
	sockaddr_in FAddr;
	TAsyncStyles FAsyncStyles;
	TLookupState FLookupState;
	NativeUInt FLookupHandle;
	TSocketEventEvent FOnSocketEvent;
	TSocketErrorEvent FOnErrorEvent;
	System::Syncobjs::TCriticalSection* FSocketLock;
	void *FGetHostData;
	void *FData;
	System::UnicodeString FService;
	System::Word FPort;
	bool FClient;
	int FQueueSize;
	bool __fastcall SendStreamPiece();
	void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMLookupComplete(TCMLookupComplete &Message);
	MESSAGE void __fastcall CMSocketMessage(TCMSocketMessage &Message);
	MESSAGE void __fastcall CMDeferFree(void *Message);
	void __fastcall DeferFree();
	void __fastcall DoSetAsyncStyles();
	HWND __fastcall GetHandle();
	System::UnicodeString __fastcall GetLocalHost();
	System::UnicodeString __fastcall GetLocalAddress();
	int __fastcall GetLocalPort();
	System::UnicodeString __fastcall GetRemoteHost();
	System::UnicodeString __fastcall GetRemoteAddress();
	int __fastcall GetRemotePort();
	sockaddr_in __fastcall GetRemoteAddr();
	
protected:
	void __fastcall AsyncInitSocket(const System::UnicodeString Name, const System::UnicodeString Address, const System::UnicodeString Service, System::Word Port, int QueueSize, bool Client);
	void __fastcall DoOpen();
	void __fastcall DoListen(int QueueSize);
	sockaddr_in __fastcall InitSocket(const System::UnicodeString Name, const System::UnicodeString Address, const System::UnicodeString Service, System::Word Port, bool Client);
	DYNAMIC void __fastcall Event(TCustomWinSocket* Socket, TSocketEvent SocketEvent);
	DYNAMIC void __fastcall Error(TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode);
	void __fastcall SetAsyncStyles(TAsyncStyles Value);
	
public:
	__fastcall TCustomWinSocket(NativeInt ASocket);
	__fastcall virtual ~TCustomWinSocket();
	void __fastcall Close()/* overload */;
	void __fastcall Close(bool ForceClosed)/* overload */;
	virtual void __fastcall DefaultHandler(void *Message);
	void __fastcall Lock();
	void __fastcall Unlock();
	void __fastcall Listen(const System::UnicodeString Name, const System::UnicodeString Address, const System::UnicodeString Service, System::Word Port, int QueueSize, bool Block = true);
	void __fastcall Open(const System::UnicodeString Name, const System::UnicodeString Address, const System::UnicodeString Service, System::Word Port, bool Block = true);
	virtual void __fastcall Accept(NativeInt Socket);
	virtual void __fastcall Connect(NativeInt Socket);
	virtual void __fastcall Disconnect(NativeInt Socket);
	virtual void __fastcall Read(NativeInt Socket);
	virtual void __fastcall Write(NativeInt Socket);
	in_addr __fastcall LookupName(const System::UnicodeString name);
	int __fastcall LookupService(const System::UnicodeString service);
	int __fastcall ReceiveLength();
	int __fastcall ReceiveBuf(void *Buf, int Count);
	System::AnsiString __fastcall ReceiveText();
	int __fastcall SendBuf(void *Buf, int Count);
	bool __fastcall SendStream(System::Classes::TStream* AStream);
	bool __fastcall SendStreamThenDrop(System::Classes::TStream* AStream);
	int __fastcall SendText(const System::AnsiString S);
	__property System::UnicodeString LocalHost = {read=GetLocalHost};
	__property System::UnicodeString LocalAddress = {read=GetLocalAddress};
	__property int LocalPort = {read=GetLocalPort, nodefault};
	__property System::UnicodeString RemoteHost = {read=GetRemoteHost};
	__property System::UnicodeString RemoteAddress = {read=GetRemoteAddress};
	__property int RemotePort = {read=GetRemotePort, nodefault};
	__property sockaddr_in RemoteAddr = {read=GetRemoteAddr};
	__property bool Connected = {read=FConnected, nodefault};
	__property sockaddr_in Addr = {read=FAddr};
	__property TAsyncStyles ASyncStyles = {read=FAsyncStyles, write=SetAsyncStyles, nodefault};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
	__property NativeInt SocketHandle = {read=FSocket, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
	__property NativeInt SocketHandle = {read=FSocket};
#endif /* _WIN64 */
	__property TLookupState LookupState = {read=FLookupState, nodefault};
	__property TSocketEventEvent OnSocketEvent = {read=FOnSocketEvent, write=FOnSocketEvent};
	__property TSocketErrorEvent OnErrorEvent = {read=FOnErrorEvent, write=FOnErrorEvent};
	__property void * Data = {read=FData, write=FData};
};


class PASCALIMPLEMENTATION TClientWinSocket : public TCustomWinSocket
{
	typedef TCustomWinSocket inherited;
	
private:
	TClientType FClientType;
	
protected:
	void __fastcall SetClientType(TClientType Value);
	
public:
	virtual void __fastcall Connect(NativeInt Socket);
	__property TClientType ClientType = {read=FClientType, write=SetClientType, nodefault};
public:
	/* TCustomWinSocket.Create */ inline __fastcall TClientWinSocket(NativeInt ASocket) : TCustomWinSocket(ASocket) { }
	/* TCustomWinSocket.Destroy */ inline __fastcall virtual ~TClientWinSocket() { }
	
};


class PASCALIMPLEMENTATION TServerClientWinSocket : public TCustomWinSocket
{
	typedef TCustomWinSocket inherited;
	
private:
	TServerWinSocket* FServerWinSocket;
	
public:
	__fastcall TServerClientWinSocket(NativeInt Socket, TServerWinSocket* ServerWinSocket);
	__fastcall virtual ~TServerClientWinSocket();
	__property TServerWinSocket* ServerWinSocket = {read=FServerWinSocket};
};


typedef void __fastcall (__closure *TThreadNotifyEvent)(System::TObject* Sender, TServerClientThread* Thread);

class PASCALIMPLEMENTATION TServerWinSocket : public TCustomWinSocket
{
	typedef TCustomWinSocket inherited;
	
private:
	TServerType FServerType;
	int FThreadCacheSize;
	System::Classes::TList* FConnections;
	System::Classes::TList* FActiveThreads;
	System::Syncobjs::TCriticalSection* FListLock;
	TServerAcceptThread* FServerAcceptThread;
	TGetSocketEvent FOnGetSocket;
	TGetThreadEvent FOnGetThread;
	TThreadNotifyEvent FOnThreadStart;
	TThreadNotifyEvent FOnThreadEnd;
	TSocketNotifyEvent FOnClientConnect;
	TSocketNotifyEvent FOnClientDisconnect;
	TSocketNotifyEvent FOnClientRead;
	TSocketNotifyEvent FOnClientWrite;
	TSocketErrorEvent FOnClientError;
	void __fastcall AddClient(TServerClientWinSocket* AClient);
	void __fastcall RemoveClient(TServerClientWinSocket* AClient);
	void __fastcall AddThread(TServerClientThread* AThread);
	void __fastcall RemoveThread(TServerClientThread* AThread);
	void __fastcall ClientEvent(System::TObject* Sender, TCustomWinSocket* Socket, TSocketEvent SocketEvent);
	void __fastcall ClientError(System::TObject* Sender, TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode);
	int __fastcall GetActiveConnections();
	int __fastcall GetActiveThreads();
	TCustomWinSocket* __fastcall GetConnections(int Index);
	int __fastcall GetIdleThreads();
	
protected:
	virtual TServerClientThread* __fastcall DoCreateThread(TServerClientWinSocket* ClientSocket);
	HIDESBASE void __fastcall Listen(System::UnicodeString &Name, System::UnicodeString &Address, System::UnicodeString &Service, System::Word Port, int QueueSize);
	void __fastcall SetServerType(TServerType Value);
	void __fastcall SetThreadCacheSize(int Value);
	DYNAMIC void __fastcall ThreadEnd(TServerClientThread* AThread);
	DYNAMIC void __fastcall ThreadStart(TServerClientThread* AThread);
	DYNAMIC TServerClientWinSocket* __fastcall GetClientSocket(NativeInt Socket);
	DYNAMIC TServerClientThread* __fastcall GetServerThread(TServerClientWinSocket* ClientSocket);
	DYNAMIC void __fastcall ClientRead(TCustomWinSocket* Socket);
	DYNAMIC void __fastcall ClientWrite(TCustomWinSocket* Socket);
	DYNAMIC void __fastcall ClientConnect(TCustomWinSocket* Socket);
	DYNAMIC void __fastcall ClientDisconnect(TCustomWinSocket* Socket);
	DYNAMIC void __fastcall ClientErrorEvent(TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode);
	
public:
	__fastcall TServerWinSocket(NativeInt ASocket);
	__fastcall virtual ~TServerWinSocket();
	virtual void __fastcall Accept(NativeInt Socket);
	virtual void __fastcall Disconnect(NativeInt Socket);
	TServerClientThread* __fastcall GetClientThread(TServerClientWinSocket* ClientSocket);
	__property int ActiveConnections = {read=GetActiveConnections, nodefault};
	__property int ActiveThreads = {read=GetActiveThreads, nodefault};
	__property TCustomWinSocket* Connections[int Index] = {read=GetConnections};
	__property int IdleThreads = {read=GetIdleThreads, nodefault};
	__property TServerType ServerType = {read=FServerType, write=SetServerType, nodefault};
	__property int ThreadCacheSize = {read=FThreadCacheSize, write=SetThreadCacheSize, nodefault};
	__property TGetSocketEvent OnGetSocket = {read=FOnGetSocket, write=FOnGetSocket};
	__property TGetThreadEvent OnGetThread = {read=FOnGetThread, write=FOnGetThread};
	__property TThreadNotifyEvent OnThreadStart = {read=FOnThreadStart, write=FOnThreadStart};
	__property TThreadNotifyEvent OnThreadEnd = {read=FOnThreadEnd, write=FOnThreadEnd};
	__property TSocketNotifyEvent OnClientConnect = {read=FOnClientConnect, write=FOnClientConnect};
	__property TSocketNotifyEvent OnClientDisconnect = {read=FOnClientDisconnect, write=FOnClientDisconnect};
	__property TSocketNotifyEvent OnClientRead = {read=FOnClientRead, write=FOnClientRead};
	__property TSocketNotifyEvent OnClientWrite = {read=FOnClientWrite, write=FOnClientWrite};
	__property TSocketErrorEvent OnClientError = {read=FOnClientError, write=FOnClientError};
};


class PASCALIMPLEMENTATION TServerAcceptThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	TServerWinSocket* FServerSocket;
	
public:
	__fastcall TServerAcceptThread(bool CreateSuspended, TServerWinSocket* ASocket);
	virtual void __fastcall Execute();
	__property TServerWinSocket* ServerSocket = {read=FServerSocket};
public:
	/* TThread.Destroy */ inline __fastcall virtual ~TServerAcceptThread() { }
	
};


class PASCALIMPLEMENTATION TServerClientThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	TServerClientWinSocket* FClientSocket;
	TServerWinSocket* FServerSocket;
	System::Sysutils::Exception* FException;
	System::Syncobjs::TSimpleEvent* FEvent;
	bool FKeepInCache;
	void *FData;
	void __fastcall HandleEvent(System::TObject* Sender, TCustomWinSocket* Socket, TSocketEvent SocketEvent);
	void __fastcall HandleError(System::TObject* Sender, TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode);
	void __fastcall DoHandleException();
	void __fastcall DoRead();
	void __fastcall DoWrite();
	
protected:
	virtual void __fastcall DoTerminate();
	virtual void __fastcall Execute();
	virtual void __fastcall ClientExecute();
	virtual void __fastcall Event(TSocketEvent SocketEvent);
	virtual void __fastcall Error(TErrorEvent ErrorEvent, int &ErrorCode);
	virtual void __fastcall HandleException();
	void __fastcall ReActivate(TServerClientWinSocket* ASocket);
	bool __fastcall StartConnect();
	bool __fastcall EndConnect();
	
public:
	__fastcall TServerClientThread(bool CreateSuspended, TServerClientWinSocket* ASocket);
	__fastcall virtual ~TServerClientThread();
	__property TServerClientWinSocket* ClientSocket = {read=FClientSocket};
	__property TServerWinSocket* ServerSocket = {read=FServerSocket};
	__property bool KeepInCache = {read=FKeepInCache, write=FKeepInCache, nodefault};
	__property void * Data = {read=FData, write=FData};
};


class PASCALIMPLEMENTATION TAbstractSocket : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FActive;
	int FPort;
	System::UnicodeString FAddress;
	System::UnicodeString FHost;
	System::UnicodeString FService;
	void __fastcall DoEvent(System::TObject* Sender, TCustomWinSocket* Socket, TSocketEvent SocketEvent);
	void __fastcall DoError(System::TObject* Sender, TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode);
	
protected:
	virtual void __fastcall Event(TCustomWinSocket* Socket, TSocketEvent SocketEvent) = 0 ;
	virtual void __fastcall Error(TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode) = 0 ;
	virtual void __fastcall DoActivate(bool Value) = 0 ;
	void __fastcall InitSocket(TCustomWinSocket* Socket);
	virtual void __fastcall Loaded();
	void __fastcall SetActive(bool Value);
	void __fastcall SetAddress(System::UnicodeString Value);
	void __fastcall SetHost(System::UnicodeString Value);
	void __fastcall SetPort(int Value);
	void __fastcall SetService(System::UnicodeString Value);
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property System::UnicodeString Address = {read=FAddress, write=SetAddress};
	__property System::UnicodeString Host = {read=FHost, write=SetHost};
	__property int Port = {read=FPort, write=SetPort, nodefault};
	__property System::UnicodeString Service = {read=FService, write=SetService};
	
public:
	void __fastcall Open();
	void __fastcall Close();
public:
	/* TComponent.Create */ inline __fastcall virtual TAbstractSocket(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TAbstractSocket() { }
	
};


class PASCALIMPLEMENTATION TCustomSocket : public TAbstractSocket
{
	typedef TAbstractSocket inherited;
	
private:
	TSocketNotifyEvent FOnLookup;
	TSocketNotifyEvent FOnConnect;
	TSocketNotifyEvent FOnConnecting;
	TSocketNotifyEvent FOnDisconnect;
	TSocketNotifyEvent FOnListen;
	TSocketNotifyEvent FOnAccept;
	TSocketNotifyEvent FOnRead;
	TSocketNotifyEvent FOnWrite;
	TSocketErrorEvent FOnError;
	
protected:
	virtual void __fastcall Event(TCustomWinSocket* Socket, TSocketEvent SocketEvent);
	virtual void __fastcall Error(TCustomWinSocket* Socket, TErrorEvent ErrorEvent, int &ErrorCode);
	__property TSocketNotifyEvent OnLookup = {read=FOnLookup, write=FOnLookup};
	__property TSocketNotifyEvent OnConnecting = {read=FOnConnecting, write=FOnConnecting};
	__property TSocketNotifyEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property TSocketNotifyEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property TSocketNotifyEvent OnListen = {read=FOnListen, write=FOnListen};
	__property TSocketNotifyEvent OnAccept = {read=FOnAccept, write=FOnAccept};
	__property TSocketNotifyEvent OnRead = {read=FOnRead, write=FOnRead};
	__property TSocketNotifyEvent OnWrite = {read=FOnWrite, write=FOnWrite};
	__property TSocketErrorEvent OnError = {read=FOnError, write=FOnError};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomSocket(System::Classes::TComponent* AOwner) : TAbstractSocket(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomSocket() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWinSocketStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	TCustomWinSocket* FSocket;
	int FTimeout;
	System::Syncobjs::TSimpleEvent* FEvent;
	
public:
	__fastcall TWinSocketStream(TCustomWinSocket* ASocket, int TimeOut);
	__fastcall virtual ~TWinSocketStream();
	bool __fastcall WaitForData(int Timeout);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	__property int TimeOut = {read=FTimeout, write=FTimeout, nodefault};
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TClientSocket : public TCustomSocket
{
	typedef TCustomSocket inherited;
	
private:
	TClientWinSocket* FClientSocket;
	
protected:
	virtual void __fastcall DoActivate(bool Value);
	TClientType __fastcall GetClientType();
	void __fastcall SetClientType(TClientType Value);
	
public:
	__fastcall virtual TClientSocket(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TClientSocket();
	__property TClientWinSocket* Socket = {read=FClientSocket};
	
__published:
	__property Active;
	__property Address = {default=0};
	__property TClientType ClientType = {read=GetClientType, write=SetClientType, nodefault};
	__property Host = {default=0};
	__property Port;
	__property Service = {default=0};
	__property OnLookup;
	__property OnConnecting;
	__property OnConnect;
	__property OnDisconnect;
	__property OnRead;
	__property OnWrite;
	__property OnError;
};


class PASCALIMPLEMENTATION TCustomServerSocket : public TCustomSocket
{
	typedef TCustomSocket inherited;
	
protected:
	TServerWinSocket* FServerSocket;
	virtual void __fastcall DoActivate(bool Value);
	TServerType __fastcall GetServerType();
	TGetThreadEvent __fastcall GetGetThreadEvent();
	TGetSocketEvent __fastcall GetGetSocketEvent();
	int __fastcall GetThreadCacheSize();
	TThreadNotifyEvent __fastcall GetOnThreadStart();
	TThreadNotifyEvent __fastcall GetOnThreadEnd();
	TSocketNotifyEvent __fastcall GetOnClientEvent(int Index);
	TSocketErrorEvent __fastcall GetOnClientError();
	void __fastcall SetServerType(TServerType Value);
	void __fastcall SetGetThreadEvent(TGetThreadEvent Value);
	void __fastcall SetGetSocketEvent(TGetSocketEvent Value);
	void __fastcall SetThreadCacheSize(int Value);
	void __fastcall SetOnThreadStart(TThreadNotifyEvent Value);
	void __fastcall SetOnThreadEnd(TThreadNotifyEvent Value);
	void __fastcall SetOnClientEvent(int Index, TSocketNotifyEvent Value);
	void __fastcall SetOnClientError(TSocketErrorEvent Value);
	__property TServerType ServerType = {read=GetServerType, write=SetServerType, nodefault};
	__property int ThreadCacheSize = {read=GetThreadCacheSize, write=SetThreadCacheSize, nodefault};
	__property TGetThreadEvent OnGetThread = {read=GetGetThreadEvent, write=SetGetThreadEvent};
	__property TGetSocketEvent OnGetSocket = {read=GetGetSocketEvent, write=SetGetSocketEvent};
	__property TThreadNotifyEvent OnThreadStart = {read=GetOnThreadStart, write=SetOnThreadStart};
	__property TThreadNotifyEvent OnThreadEnd = {read=GetOnThreadEnd, write=SetOnThreadEnd};
	__property TSocketNotifyEvent OnClientConnect = {read=GetOnClientEvent, write=SetOnClientEvent, index=2};
	__property TSocketNotifyEvent OnClientDisconnect = {read=GetOnClientEvent, write=SetOnClientEvent, index=3};
	__property TSocketNotifyEvent OnClientRead = {read=GetOnClientEvent, write=SetOnClientEvent, index=0};
	__property TSocketNotifyEvent OnClientWrite = {read=GetOnClientEvent, write=SetOnClientEvent, index=1};
	__property TSocketErrorEvent OnClientError = {read=GetOnClientError, write=SetOnClientError};
	
public:
	__fastcall virtual ~TCustomServerSocket();
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomServerSocket(System::Classes::TComponent* AOwner) : TCustomSocket(AOwner) { }
	
};


class PASCALIMPLEMENTATION TServerSocket : public TCustomServerSocket
{
	typedef TCustomServerSocket inherited;
	
public:
	__fastcall virtual TServerSocket(System::Classes::TComponent* AOwner);
	__property TServerWinSocket* Socket = {read=FServerSocket};
	
__published:
	__property Active;
	__property Port;
	__property Service = {default=0};
	__property ServerType;
	__property ThreadCacheSize = {default=10};
	__property OnListen;
	__property OnAccept;
	__property OnGetThread;
	__property OnGetSocket;
	__property OnThreadStart;
	__property OnThreadEnd;
	__property OnClientConnect;
	__property OnClientDisconnect;
	__property OnClientRead;
	__property OnClientWrite;
	__property OnClientError;
public:
	/* TCustomServerSocket.Destroy */ inline __fastcall virtual ~TServerSocket() { }
	
};


typedef void __fastcall (*TSocketErrorProc)(int ErrorCode);

//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_SOCKETMESSAGE = System::Word(0x401);
static const System::Word CM_DEFERFREE = System::Word(0x402);
static const System::Word CM_LOOKUPCOMPLETE = System::Word(0x403);
extern DELPHI_PACKAGE TSocketErrorProc __fastcall SetErrorProc(TSocketErrorProc ErrorProc);
}	/* namespace Scktcomp */
}	/* namespace Win */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN_SCKTCOMP)
using namespace System::Win::Scktcomp;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN)
using namespace System::Win;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Win_ScktcompHPP

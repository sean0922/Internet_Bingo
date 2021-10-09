// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdThread.pas' rev: 33.00 (Windows)

#ifndef IdthreadHPP
#define IdthreadHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdGlobal.hpp>
#include <IdException.hpp>
#include <IdYarn.hpp>
#include <IdTask.hpp>
#include <IdThreadSafe.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idthread
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIdThreadException;
class DELPHICLASS EIdThreadTerminateAndWaitFor;
class DELPHICLASS TIdThread;
class DELPHICLASS TIdThreadWithTask;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdThreadException : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdThreadException(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdThreadException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdThreadException(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdThreadException(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdThreadException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdThreadException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdThreadException(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdThreadException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdThreadException(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdThreadException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdThreadException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdThreadException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdThreadException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdThreadTerminateAndWaitFor : public EIdThreadException
{
	typedef EIdThreadException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdThreadTerminateAndWaitFor(const System::UnicodeString AMsg)/* overload */ : EIdThreadException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdThreadTerminateAndWaitFor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdThreadException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdThreadTerminateAndWaitFor(NativeUInt Ident)/* overload */ : EIdThreadException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdThreadTerminateAndWaitFor(System::PResStringRec ResStringRec)/* overload */ : EIdThreadException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdThreadTerminateAndWaitFor(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdThreadException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdThreadTerminateAndWaitFor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdThreadException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdThreadTerminateAndWaitFor(const System::UnicodeString Msg, int AHelpContext) : EIdThreadException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdThreadTerminateAndWaitFor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdThreadException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdThreadTerminateAndWaitFor(NativeUInt Ident, int AHelpContext)/* overload */ : EIdThreadException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdThreadTerminateAndWaitFor(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdThreadException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdThreadTerminateAndWaitFor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdThreadException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdThreadTerminateAndWaitFor(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdThreadException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdThreadTerminateAndWaitFor() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TIdThreadStopMode : unsigned char { smTerminate, smSuspend };

typedef void __fastcall (__closure *TIdExceptionThreadEvent)(TIdThread* AThread, System::Sysutils::Exception* AException);

typedef void __fastcall (__closure *TIdNotifyThreadEvent)(TIdThread* AThread);

typedef void __fastcall (__closure *TIdSynchronizeThreadEvent)(TIdThread* AThread, void * AData);

enum DECLSPEC_DENUM Idthread__3 : unsigned char { itoStopped, itoReqCleanup, itoDataOwner, itoTag };

typedef System::Set<Idthread__3, Idthread__3::itoStopped, Idthread__3::itoTag> TIdThreadOptions;

class PASCALIMPLEMENTATION TIdThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
protected:
	System::TObject* FData;
	Idglobal::TIdCriticalSection* FLock;
	bool FLoop;
	System::UnicodeString FName;
	TIdThreadStopMode FStopMode;
	TIdThreadOptions FOptions;
	System::UnicodeString FTerminatingException;
	System::TClass FTerminatingExceptionClass;
	Idyarn::TIdYarn* FYarn;
	TIdExceptionThreadEvent FOnException;
	TIdNotifyThreadEvent FOnStopped;
	virtual void __fastcall AfterRun();
	virtual void __fastcall AfterExecute();
	virtual void __fastcall BeforeExecute();
	virtual void __fastcall BeforeRun();
	virtual void __fastcall Cleanup();
	virtual void __fastcall DoException(System::Sysutils::Exception* AException);
	virtual void __fastcall DoStopped();
	virtual void __fastcall Execute();
	bool __fastcall GetStopped();
	virtual bool __fastcall HandleRunException(System::Sysutils::Exception* AException);
	virtual void __fastcall Run() = 0 ;
	__classmethod void __fastcall WaitAllThreadsTerminated(int AMSec = 0xea60);
	
public:
	__fastcall virtual TIdThread(bool ACreateSuspended, bool ALoop, const System::UnicodeString AName);
	__fastcall virtual ~TIdThread();
	HIDESBASE virtual void __fastcall Start();
	virtual void __fastcall Stop();
	HIDESBASE void __fastcall Synchronize(System::Classes::TThreadMethod Method)/* overload */;
	HIDESBASE virtual void __fastcall Terminate();
	virtual void __fastcall TerminateAndWaitFor();
	__property System::TObject* Data = {read=FData, write=FData};
	__property bool Loop = {read=FLoop, write=FLoop, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property ReturnValue;
	__property TIdThreadStopMode StopMode = {read=FStopMode, write=FStopMode, nodefault};
	__property bool Stopped = {read=GetStopped, nodefault};
	__property Terminated;
	__property System::UnicodeString TerminatingException = {read=FTerminatingException};
	__property System::TClass TerminatingExceptionClass = {read=FTerminatingExceptionClass};
	__property Idyarn::TIdYarn* Yarn = {read=FYarn, write=FYarn};
	__property TIdExceptionThreadEvent OnException = {read=FOnException, write=FOnException};
	__property TIdNotifyThreadEvent OnStopped = {read=FOnStopped, write=FOnStopped};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Synchronize(System::Classes::_di_TThreadProcedure AThreadProc){ System::Classes::TThread::Synchronize(AThreadProc); }
	
public:
	inline void __fastcall  Synchronize(System::Classes::TThread* const AThread, System::Classes::TThreadMethod AMethod){ System::Classes::TThread::Synchronize(AThread, AMethod); }
	inline void __fastcall  Synchronize(System::Classes::TThread* const AThread, System::Classes::_di_TThreadProcedure AThreadProc){ System::Classes::TThread::Synchronize(AThread, AThreadProc); }
	
};


class PASCALIMPLEMENTATION TIdThreadWithTask : public TIdThread
{
	typedef TIdThread inherited;
	
protected:
	Idtask::TIdTask* FTask;
	virtual void __fastcall AfterRun();
	virtual void __fastcall BeforeRun();
	virtual void __fastcall Run();
	virtual void __fastcall DoException(System::Sysutils::Exception* AException);
	void __fastcall SetTask(Idtask::TIdTask* AValue);
	
public:
	__fastcall virtual TIdThreadWithTask(Idtask::TIdTask* ATask, const System::UnicodeString AName);
	__fastcall virtual ~TIdThreadWithTask();
	__property Idtask::TIdTask* Task = {read=FTask, write=SetTask};
};


#ifndef _WIN64
typedef System::TMetaClass* TIdThreadClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIdThreadClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TIdThreadWithTaskClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIdThreadWithTaskClass);
#endif /* _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Word IdWaitAllThreadsTerminatedCount = System::Word(0xea60);
static const System::Byte IdWaitAllThreadsTerminatedStep = System::Byte(0xfa);
extern DELPHI_PACKAGE Idthreadsafe::TIdThreadSafeInteger* GThreadCount;
}	/* namespace Idthread */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDTHREAD)
using namespace Idthread;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdthreadHPP

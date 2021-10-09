// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdException.pas' rev: 33.00 (Windows)

#ifndef IdexceptionHPP
#define IdexceptionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idexception
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIdException;
class DELPHICLASS EIdSilentException;
class DELPHICLASS EIdConnClosedGracefully;
class DELPHICLASS EIdSocketHandleError;
class DELPHICLASS EIdPackageSizeTooBig;
class DELPHICLASS EIdNotAllBytesSent;
class DELPHICLASS EIdCouldNotBindSocket;
class DELPHICLASS EIdCanNotBindPortInRange;
class DELPHICLASS EIdInvalidPortRange;
class DELPHICLASS EIdCannotSetIPVersionWhenConnected;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	__fastcall virtual EIdException(const System::UnicodeString AMsg)/* overload */;
	__classmethod void __fastcall Toss _DEPRECATED_ATTRIBUTE1("Use raise instead") (const System::UnicodeString AMsg);
public:
	/* Exception.CreateFmt */ inline __fastcall EIdException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TClassIdException;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TClassIdException);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdSilentException : public EIdException
{
	typedef EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdSilentException(const System::UnicodeString AMsg)/* overload */ : EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdSilentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdSilentException(NativeUInt Ident)/* overload */ : EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdSilentException(System::PResStringRec ResStringRec)/* overload */ : EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdSilentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdSilentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdSilentException(const System::UnicodeString Msg, int AHelpContext) : EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdSilentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdSilentException(NativeUInt Ident, int AHelpContext)/* overload */ : EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdSilentException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdSilentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdSilentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdSilentException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdConnClosedGracefully : public EIdSilentException
{
	typedef EIdSilentException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdConnClosedGracefully(const System::UnicodeString AMsg)/* overload */ : EIdSilentException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdConnClosedGracefully(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdSilentException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdConnClosedGracefully(NativeUInt Ident)/* overload */ : EIdSilentException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdConnClosedGracefully(System::PResStringRec ResStringRec)/* overload */ : EIdSilentException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdConnClosedGracefully(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSilentException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdConnClosedGracefully(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSilentException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdConnClosedGracefully(const System::UnicodeString Msg, int AHelpContext) : EIdSilentException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdConnClosedGracefully(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdSilentException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdConnClosedGracefully(NativeUInt Ident, int AHelpContext)/* overload */ : EIdSilentException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdConnClosedGracefully(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdSilentException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdConnClosedGracefully(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSilentException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdConnClosedGracefully(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSilentException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdConnClosedGracefully() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdSocketHandleError : public EIdException
{
	typedef EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdSocketHandleError(const System::UnicodeString AMsg)/* overload */ : EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdSocketHandleError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdSocketHandleError(NativeUInt Ident)/* overload */ : EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdSocketHandleError(System::PResStringRec ResStringRec)/* overload */ : EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdSocketHandleError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdSocketHandleError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdSocketHandleError(const System::UnicodeString Msg, int AHelpContext) : EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdSocketHandleError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdSocketHandleError(NativeUInt Ident, int AHelpContext)/* overload */ : EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdSocketHandleError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdSocketHandleError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdSocketHandleError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdSocketHandleError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdPackageSizeTooBig : public EIdSocketHandleError
{
	typedef EIdSocketHandleError inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdPackageSizeTooBig(const System::UnicodeString AMsg)/* overload */ : EIdSocketHandleError(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdPackageSizeTooBig(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdSocketHandleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdPackageSizeTooBig(NativeUInt Ident)/* overload */ : EIdSocketHandleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdPackageSizeTooBig(System::PResStringRec ResStringRec)/* overload */ : EIdSocketHandleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdPackageSizeTooBig(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdPackageSizeTooBig(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdPackageSizeTooBig(const System::UnicodeString Msg, int AHelpContext) : EIdSocketHandleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdPackageSizeTooBig(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdSocketHandleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdPackageSizeTooBig(NativeUInt Ident, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdPackageSizeTooBig(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdPackageSizeTooBig(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdPackageSizeTooBig(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdPackageSizeTooBig() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdNotAllBytesSent : public EIdSocketHandleError
{
	typedef EIdSocketHandleError inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdNotAllBytesSent(const System::UnicodeString AMsg)/* overload */ : EIdSocketHandleError(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdNotAllBytesSent(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdSocketHandleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdNotAllBytesSent(NativeUInt Ident)/* overload */ : EIdSocketHandleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdNotAllBytesSent(System::PResStringRec ResStringRec)/* overload */ : EIdSocketHandleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdNotAllBytesSent(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdNotAllBytesSent(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdNotAllBytesSent(const System::UnicodeString Msg, int AHelpContext) : EIdSocketHandleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdNotAllBytesSent(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdSocketHandleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdNotAllBytesSent(NativeUInt Ident, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdNotAllBytesSent(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdNotAllBytesSent(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdNotAllBytesSent(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdNotAllBytesSent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdCouldNotBindSocket : public EIdSocketHandleError
{
	typedef EIdSocketHandleError inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdCouldNotBindSocket(const System::UnicodeString AMsg)/* overload */ : EIdSocketHandleError(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdCouldNotBindSocket(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdSocketHandleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdCouldNotBindSocket(NativeUInt Ident)/* overload */ : EIdSocketHandleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdCouldNotBindSocket(System::PResStringRec ResStringRec)/* overload */ : EIdSocketHandleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdCouldNotBindSocket(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdCouldNotBindSocket(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdCouldNotBindSocket(const System::UnicodeString Msg, int AHelpContext) : EIdSocketHandleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdCouldNotBindSocket(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdSocketHandleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdCouldNotBindSocket(NativeUInt Ident, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdCouldNotBindSocket(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdCouldNotBindSocket(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdCouldNotBindSocket(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdCouldNotBindSocket() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdCanNotBindPortInRange : public EIdSocketHandleError
{
	typedef EIdSocketHandleError inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdCanNotBindPortInRange(const System::UnicodeString AMsg)/* overload */ : EIdSocketHandleError(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdCanNotBindPortInRange(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdSocketHandleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdCanNotBindPortInRange(NativeUInt Ident)/* overload */ : EIdSocketHandleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdCanNotBindPortInRange(System::PResStringRec ResStringRec)/* overload */ : EIdSocketHandleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdCanNotBindPortInRange(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdCanNotBindPortInRange(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdCanNotBindPortInRange(const System::UnicodeString Msg, int AHelpContext) : EIdSocketHandleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdCanNotBindPortInRange(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdSocketHandleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdCanNotBindPortInRange(NativeUInt Ident, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdCanNotBindPortInRange(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdCanNotBindPortInRange(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdCanNotBindPortInRange(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdCanNotBindPortInRange() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdInvalidPortRange : public EIdSocketHandleError
{
	typedef EIdSocketHandleError inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdInvalidPortRange(const System::UnicodeString AMsg)/* overload */ : EIdSocketHandleError(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdInvalidPortRange(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdSocketHandleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdInvalidPortRange(NativeUInt Ident)/* overload */ : EIdSocketHandleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdInvalidPortRange(System::PResStringRec ResStringRec)/* overload */ : EIdSocketHandleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdInvalidPortRange(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdInvalidPortRange(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdInvalidPortRange(const System::UnicodeString Msg, int AHelpContext) : EIdSocketHandleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdInvalidPortRange(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdSocketHandleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdInvalidPortRange(NativeUInt Ident, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdInvalidPortRange(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdInvalidPortRange(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdInvalidPortRange(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdInvalidPortRange() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdCannotSetIPVersionWhenConnected : public EIdSocketHandleError
{
	typedef EIdSocketHandleError inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdCannotSetIPVersionWhenConnected(const System::UnicodeString AMsg)/* overload */ : EIdSocketHandleError(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdCannotSetIPVersionWhenConnected(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdSocketHandleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdCannotSetIPVersionWhenConnected(NativeUInt Ident)/* overload */ : EIdSocketHandleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdCannotSetIPVersionWhenConnected(System::PResStringRec ResStringRec)/* overload */ : EIdSocketHandleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdCannotSetIPVersionWhenConnected(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdCannotSetIPVersionWhenConnected(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdCannotSetIPVersionWhenConnected(const System::UnicodeString Msg, int AHelpContext) : EIdSocketHandleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdCannotSetIPVersionWhenConnected(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdSocketHandleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdCannotSetIPVersionWhenConnected(NativeUInt Ident, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdCannotSetIPVersionWhenConnected(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdCannotSetIPVersionWhenConnected(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdCannotSetIPVersionWhenConnected(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdSocketHandleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdCannotSetIPVersionWhenConnected() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idexception */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDEXCEPTION)
using namespace Idexception;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdexceptionHPP

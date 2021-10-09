// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.WinSock.pas' rev: 33.00 (Windows)

#ifndef Winapi_WinsockHPP
#define Winapi_WinsockHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------
#include <winsock.h>
namespace Winapi
{
namespace Winsock
{
typedef fd_set *PFDSet;
typedef fd_set TFDSet;
}
}

namespace Winapi
{
namespace Winsock
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef timeval *PTimeVal;

typedef timeval TTimeVal;

typedef char * *MarshaledAStringList;

typedef hostent *PHostEnt;

typedef hostent THostEnt;

typedef netent *PNetEnt;

typedef netent TNetEnt;

typedef servent *PServEnt;

typedef servent TServEnt;

typedef protoent *PProtoEnt;

typedef protoent TProtoEnt;

typedef in_addr *PInAddr;

typedef in_addr TInAddr;

typedef sockaddr_in *PSockAddrIn;

typedef sockaddr_in TSockAddrIn;

typedef WSAData *PWSAData;

typedef WSAData TWSAData;

typedef sockproto *PSockProto;

typedef sockproto TSockProto;

typedef linger *PLinger;

typedef linger TLinger;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Winsock */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_WINSOCK)
using namespace Winapi::Winsock;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_WinsockHPP

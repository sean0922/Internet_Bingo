// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdBaseComponent.pas' rev: 33.00 (Windows)

#ifndef IdbasecomponentHPP
#define IdbasecomponentHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idbasecomponent
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdInitializerComponent;
class DELPHICLASS TIdBaseComponent;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TIdInitializerComponent : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	bool __fastcall GetIsLoading();
	bool __fastcall GetIsDesignTime();
	virtual void __fastcall InitComponent();
	
public:
	__fastcall TIdInitializerComponent()/* overload */;
	__fastcall virtual TIdInitializerComponent(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TIdInitializerComponent() { }
	
};


class PASCALIMPLEMENTATION TIdBaseComponent : public TIdInitializerComponent
{
	typedef TIdInitializerComponent inherited;
	
protected:
	System::UnicodeString __fastcall GetIndyVersion();
	__property bool IsLoading = {read=GetIsLoading, nodefault};
	__property bool IsDesignTime = {read=GetIsDesignTime, nodefault};
	
public:
	__fastcall TIdBaseComponent(System::Classes::TComponent* AOwner)/* overload */;
	__property System::UnicodeString Version = {read=GetIndyVersion};
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdBaseComponent()/* overload */ : TIdInitializerComponent() { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TIdBaseComponent() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idbasecomponent */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDBASECOMPONENT)
using namespace Idbasecomponent;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdbasecomponentHPP

// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdTask.pas' rev: 33.00 (Windows)

#ifndef IdtaskHPP
#define IdtaskHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <IdYarn.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idtask
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdTask;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIdTask : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FBeforeRunDone;
	System::TObject* FData;
	Idyarn::TIdYarn* FYarn;
	virtual void __fastcall AfterRun();
	virtual void __fastcall BeforeRun();
	virtual bool __fastcall Run() = 0 ;
	virtual void __fastcall HandleException(System::Sysutils::Exception* AException);
	
public:
	__fastcall virtual TIdTask(Idyarn::TIdYarn* AYarn);
	__fastcall virtual ~TIdTask();
	void __fastcall DoAfterRun();
	void __fastcall DoBeforeRun();
	bool __fastcall DoRun();
	void __fastcall DoException(System::Sysutils::Exception* AException);
	__property bool BeforeRunDone = {read=FBeforeRunDone, nodefault};
	__property System::TObject* Data = {read=FData, write=FData};
	__property Idyarn::TIdYarn* Yarn = {read=FYarn};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idtask */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDTASK)
using namespace Idtask;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdtaskHPP

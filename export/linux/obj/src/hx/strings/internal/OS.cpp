// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_hx_strings_internal_OS
#include <hx/strings/internal/OS.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7876389a94c1925c_20_boot,"hx.strings.internal.OS","boot",0xab99b215,"hx.strings.internal.OS.boot","hx/strings/internal/OS.hx",20,0xa777ff14)
namespace hx{
namespace strings{
namespace internal{

void OS_obj::__construct() { }

Dynamic OS_obj::__CreateEmpty() { return new OS_obj; }

void *OS_obj::_hx_vtable = 0;

Dynamic OS_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OS_obj > _hx_result = new OS_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OS_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x453199af;
}

bool OS_obj::isWindows;


OS_obj::OS_obj()
{
}

bool OS_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { outValue = ( isWindows ); return true; }
	}
	return false;
}

bool OS_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OS_obj_sMemberStorageInfo = 0;
static hx::StaticInfo OS_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &OS_obj::isWindows,HX_HCSTRING("isWindows","\xb9","\x5b","\x73","\xec")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void OS_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OS_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OS_obj::isWindows,"isWindows");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OS_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OS_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OS_obj::isWindows,"isWindows");
};

#endif

hx::Class OS_obj::__mClass;

static ::String OS_obj_sStaticFields[] = {
	HX_HCSTRING("isWindows","\xb9","\x5b","\x73","\xec"),
	::String(null())
};

void OS_obj::__register()
{
	hx::Object *dummy = new OS_obj;
	OS_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.strings.internal.OS","\x6b","\xfd","\x2a","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OS_obj::__GetStatic;
	__mClass->mSetStaticField = &OS_obj::__SetStatic;
	__mClass->mMarkFunc = OS_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OS_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OS_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OS_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OS_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OS_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OS_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7876389a94c1925c_20_boot)
HXLINE(  26)			::String os = ::Sys_obj::systemName();
HXLINE(  28)			return  ::EReg_obj::__alloc( HX_CTX ,HX_("win",1c,a8,5a,00),HX_("i",69,00,00,00))->match(os);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_7876389a94c1925c_20_boot)
HXDLIN(  20)		isWindows =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace hx
} // end namespace strings
} // end namespace internal

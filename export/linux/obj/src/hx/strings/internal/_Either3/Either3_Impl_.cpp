// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__Either3_Either3_Impl_
#include <hx/strings/internal/_Either3/Either3_Impl_.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either3__Either3
#include <hx/strings/internal/_Either3/_Either3.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_17__new,"hx.strings.internal._Either3.Either3_Impl_","_new",0x07f964b9,"hx.strings.internal._Either3.Either3_Impl_._new","hx/strings/internal/Either3.hx",17,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_24_get_value,"hx.strings.internal._Either3.Either3_Impl_","get_value",0xb730ed70,"hx.strings.internal._Either3.Either3_Impl_.get_value","hx/strings/internal/Either3.hx",24,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_30_fromA,"hx.strings.internal._Either3.Either3_Impl_","fromA",0xfcb9353f,"hx.strings.internal._Either3.Either3_Impl_.fromA","hx/strings/internal/Either3.hx",30,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_36_fromB,"hx.strings.internal._Either3.Either3_Impl_","fromB",0xfcb93540,"hx.strings.internal._Either3.Either3_Impl_.fromB","hx/strings/internal/Either3.hx",36,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_42_fromC,"hx.strings.internal._Either3.Either3_Impl_","fromC",0xfcb93541,"hx.strings.internal._Either3.Either3_Impl_.fromC","hx/strings/internal/Either3.hx",42,0x57afcf16)
namespace hx{
namespace strings{
namespace internal{
namespace _Either3{

void Either3_Impl__obj::__construct() { }

Dynamic Either3_Impl__obj::__CreateEmpty() { return new Either3_Impl__obj; }

void *Either3_Impl__obj::_hx_vtable = 0;

Dynamic Either3_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Either3_Impl__obj > _hx_result = new Either3_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Either3_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2544c1f0;
}

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::_new( ::hx::strings::internal::_Either3::_Either3 value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_17__new)
HXDLIN(  17)		 ::hx::strings::internal::_Either3::_Either3 this1 = value;
HXDLIN(  17)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,_new,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::get_value( ::hx::strings::internal::_Either3::_Either3 this1){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_24_get_value)
HXDLIN(  24)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,get_value,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::fromA( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_30_fromA)
HXDLIN(  30)		 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::a(value);
HXDLIN(  30)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,fromA,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::fromB( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_36_fromB)
HXDLIN(  36)		 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::b(value);
HXDLIN(  36)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,fromB,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::fromC( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_42_fromC)
HXDLIN(  42)		 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::c(value);
HXDLIN(  42)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,fromC,return )


Either3_Impl__obj::Either3_Impl__obj()
{
}

bool Either3_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fromA") ) { outValue = fromA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromB") ) { outValue = fromB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromC") ) { outValue = fromC_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Either3_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Either3_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Either3_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Either3_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Either3_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Either3_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Either3_Impl__obj::__mClass;

static ::String Either3_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("fromA","\x97","\x17","\x8e","\x06"),
	HX_HCSTRING("fromB","\x98","\x17","\x8e","\x06"),
	HX_HCSTRING("fromC","\x99","\x17","\x8e","\x06"),
	::String(null())
};

void Either3_Impl__obj::__register()
{
	hx::Object *dummy = new Either3_Impl__obj;
	Either3_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.strings.internal._Either3.Either3_Impl_","\x16","\x50","\xcc","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Either3_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Either3_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Either3_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Either3_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Either3_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Either3_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Either3_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either3
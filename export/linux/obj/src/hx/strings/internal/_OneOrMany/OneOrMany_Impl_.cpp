// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__OneOrMany_OneOrMany_Impl_
#include <hx/strings/internal/_OneOrMany/OneOrMany_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b9432394216394e3_20_fromSingle,"hx.strings.internal._OneOrMany.OneOrMany_Impl_","fromSingle",0xf3af2bb6,"hx.strings.internal._OneOrMany.OneOrMany_Impl_.fromSingle","hx/strings/internal/OneOrMany.hx",20,0xe47e89bc)
namespace hx{
namespace strings{
namespace internal{
namespace _OneOrMany{

void OneOrMany_Impl__obj::__construct() { }

Dynamic OneOrMany_Impl__obj::__CreateEmpty() { return new OneOrMany_Impl__obj; }

void *OneOrMany_Impl__obj::_hx_vtable = 0;

Dynamic OneOrMany_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OneOrMany_Impl__obj > _hx_result = new OneOrMany_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OneOrMany_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e8220dc;
}

::cpp::VirtualArray OneOrMany_Impl__obj::fromSingle( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b9432394216394e3_20_fromSingle)
HXDLIN(  20)		return ::cpp::VirtualArray_obj::__new(1)->init(0,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OneOrMany_Impl__obj,fromSingle,return )


OneOrMany_Impl__obj::OneOrMany_Impl__obj()
{
}

bool OneOrMany_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromSingle") ) { outValue = fromSingle_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OneOrMany_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *OneOrMany_Impl__obj_sStaticStorageInfo = 0;
#endif

static void OneOrMany_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OneOrMany_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OneOrMany_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OneOrMany_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class OneOrMany_Impl__obj::__mClass;

static ::String OneOrMany_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromSingle","\x92","\x6b","\x65","\xfc"),
	::String(null())
};

void OneOrMany_Impl__obj::__register()
{
	hx::Object *dummy = new OneOrMany_Impl__obj;
	OneOrMany_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.strings.internal._OneOrMany.OneOrMany_Impl_","\xca","\x25","\xd2","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OneOrMany_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OneOrMany_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OneOrMany_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OneOrMany_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OneOrMany_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OneOrMany_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OneOrMany_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _OneOrMany
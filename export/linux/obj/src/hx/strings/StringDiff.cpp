// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_StringDiff
#include <hx/strings/StringDiff.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5f1d75d03ddc847_4115_new,"hx.strings.StringDiff","new",0x603af792,"hx.strings.StringDiff.new","hx/strings/Strings.hx",4115,0x74f74a28)
namespace hx{
namespace strings{

void StringDiff_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a5f1d75d03ddc847_4115_new)
            	}

Dynamic StringDiff_obj::__CreateEmpty() { return new StringDiff_obj; }

void *StringDiff_obj::_hx_vtable = 0;

Dynamic StringDiff_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringDiff_obj > _hx_result = new StringDiff_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringDiff_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2268da24;
}


StringDiff_obj::StringDiff_obj()
{
}

void StringDiff_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringDiff);
	HX_MARK_MEMBER_NAME(at,"at");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_END_CLASS();
}

void StringDiff_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(at,"at");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
}

hx::Val StringDiff_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return hx::Val( at ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return hx::Val( right ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StringDiff_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { at=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringDiff_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("at","\xf3","\x54","\x00","\x00"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StringDiff_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(StringDiff_obj,at),HX_HCSTRING("at","\xf3","\x54","\x00","\x00")},
	{hx::fsString,(int)offsetof(StringDiff_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsString,(int)offsetof(StringDiff_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StringDiff_obj_sStaticStorageInfo = 0;
#endif

static ::String StringDiff_obj_sMemberFields[] = {
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	::String(null()) };

static void StringDiff_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringDiff_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringDiff_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringDiff_obj::__mClass,"__mClass");
};

#endif

hx::Class StringDiff_obj::__mClass;

void StringDiff_obj::__register()
{
	hx::Object *dummy = new StringDiff_obj;
	StringDiff_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.strings.StringDiff","\xa0","\x86","\x27","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringDiff_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StringDiff_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StringDiff_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringDiff_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringDiff_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringDiff_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings

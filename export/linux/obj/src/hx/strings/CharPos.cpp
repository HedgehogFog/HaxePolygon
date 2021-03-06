// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_CharPos
#include <hx/strings/CharPos.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_343c8e38fe80fc32_4080_new,"hx.strings.CharPos","new",0x7dfab3e6,"hx.strings.CharPos.new","hx/strings/Strings.hx",4080,0x74f74a28)
namespace hx{
namespace strings{

void CharPos_obj::__construct(int index,int line,int col){
            	HX_STACKFRAME(&_hx_pos_343c8e38fe80fc32_4080_new)
HXLINE(4081)		this->index = index;
HXLINE(4082)		this->line = line;
HXLINE(4083)		this->col = col;
            	}

Dynamic CharPos_obj::__CreateEmpty() { return new CharPos_obj; }

void *CharPos_obj::_hx_vtable = 0;

Dynamic CharPos_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CharPos_obj > _hx_result = new CharPos_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CharPos_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55a69af0;
}


CharPos_obj::CharPos_obj()
{
}

hx::Val CharPos_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { return hx::Val( col ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return hx::Val( line ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CharPos_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { col=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharPos_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("col","\x40","\x80","\x4b","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CharPos_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CharPos_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsInt,(int)offsetof(CharPos_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsInt,(int)offsetof(CharPos_obj,col),HX_HCSTRING("col","\x40","\x80","\x4b","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CharPos_obj_sStaticStorageInfo = 0;
#endif

static ::String CharPos_obj_sMemberFields[] = {
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("col","\x40","\x80","\x4b","\x00"),
	::String(null()) };

static void CharPos_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CharPos_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CharPos_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CharPos_obj::__mClass,"__mClass");
};

#endif

hx::Class CharPos_obj::__mClass;

void CharPos_obj::__register()
{
	hx::Object *dummy = new CharPos_obj;
	CharPos_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.strings.CharPos","\xf4","\x88","\x15","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CharPos_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CharPos_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CharPos_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CharPos_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharPos_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharPos_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings

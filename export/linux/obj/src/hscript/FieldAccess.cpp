// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_hscript_FieldAccess
#include <hscript/FieldAccess.h>
#endif
namespace hscript{

::hscript::FieldAccess FieldAccess_obj::AInline;

::hscript::FieldAccess FieldAccess_obj::AMacro;

::hscript::FieldAccess FieldAccess_obj::AOverride;

::hscript::FieldAccess FieldAccess_obj::APrivate;

::hscript::FieldAccess FieldAccess_obj::APublic;

::hscript::FieldAccess FieldAccess_obj::AStatic;

bool FieldAccess_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AInline",7a,65,c7,5c)) { outValue = FieldAccess_obj::AInline; return true; }
	if (inName==HX_("AMacro",0b,54,76,93)) { outValue = FieldAccess_obj::AMacro; return true; }
	if (inName==HX_("AOverride",ad,87,25,b2)) { outValue = FieldAccess_obj::AOverride; return true; }
	if (inName==HX_("APrivate",c2,4e,8f,dc)) { outValue = FieldAccess_obj::APrivate; return true; }
	if (inName==HX_("APublic",ca,1b,7b,2a)) { outValue = FieldAccess_obj::APublic; return true; }
	if (inName==HX_("AStatic",cf,77,83,c9)) { outValue = FieldAccess_obj::AStatic; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FieldAccess_obj)

int FieldAccess_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AInline",7a,65,c7,5c)) return 2;
	if (inName==HX_("AMacro",0b,54,76,93)) return 5;
	if (inName==HX_("AOverride",ad,87,25,b2)) return 3;
	if (inName==HX_("APrivate",c2,4e,8f,dc)) return 1;
	if (inName==HX_("APublic",ca,1b,7b,2a)) return 0;
	if (inName==HX_("AStatic",cf,77,83,c9)) return 4;
	return super::__FindIndex(inName);
}

int FieldAccess_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AInline",7a,65,c7,5c)) return 0;
	if (inName==HX_("AMacro",0b,54,76,93)) return 0;
	if (inName==HX_("AOverride",ad,87,25,b2)) return 0;
	if (inName==HX_("APrivate",c2,4e,8f,dc)) return 0;
	if (inName==HX_("APublic",ca,1b,7b,2a)) return 0;
	if (inName==HX_("AStatic",cf,77,83,c9)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FieldAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AInline",7a,65,c7,5c)) return AInline;
	if (inName==HX_("AMacro",0b,54,76,93)) return AMacro;
	if (inName==HX_("AOverride",ad,87,25,b2)) return AOverride;
	if (inName==HX_("APrivate",c2,4e,8f,dc)) return APrivate;
	if (inName==HX_("APublic",ca,1b,7b,2a)) return APublic;
	if (inName==HX_("AStatic",cf,77,83,c9)) return AStatic;
	return super::__Field(inName,inCallProp);
}

static ::String FieldAccess_obj_sStaticFields[] = {
	HX_("APublic",ca,1b,7b,2a),
	HX_("APrivate",c2,4e,8f,dc),
	HX_("AInline",7a,65,c7,5c),
	HX_("AOverride",ad,87,25,b2),
	HX_("AStatic",cf,77,83,c9),
	HX_("AMacro",0b,54,76,93),
	::String(null())
};

static void FieldAccess_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FieldAccess_obj::AInline,"AInline");
	HX_MARK_MEMBER_NAME(FieldAccess_obj::AMacro,"AMacro");
	HX_MARK_MEMBER_NAME(FieldAccess_obj::AOverride,"AOverride");
	HX_MARK_MEMBER_NAME(FieldAccess_obj::APrivate,"APrivate");
	HX_MARK_MEMBER_NAME(FieldAccess_obj::APublic,"APublic");
	HX_MARK_MEMBER_NAME(FieldAccess_obj::AStatic,"AStatic");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FieldAccess_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::AInline,"AInline");
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::AMacro,"AMacro");
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::AOverride,"AOverride");
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::APrivate,"APrivate");
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::APublic,"APublic");
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::AStatic,"AStatic");
};
#endif

hx::Class FieldAccess_obj::__mClass;

Dynamic __Create_FieldAccess_obj() { return new FieldAccess_obj; }

void FieldAccess_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("hscript.FieldAccess","\x63","\x1d","\x79","\x4e"), hx::TCanCast< FieldAccess_obj >,FieldAccess_obj_sStaticFields,0,
	&__Create_FieldAccess_obj, &__Create,
	&super::__SGetClass(), &CreateFieldAccess_obj, FieldAccess_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FieldAccess_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FieldAccess_obj::__GetStatic;
}

void FieldAccess_obj::__boot()
{
AInline = hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("AInline","\x7a","\x65","\xc7","\x5c"),2,0);
AMacro = hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("AMacro","\x0b","\x54","\x76","\x93"),5,0);
AOverride = hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("AOverride","\xad","\x87","\x25","\xb2"),3,0);
APrivate = hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("APrivate","\xc2","\x4e","\x8f","\xdc"),1,0);
APublic = hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("APublic","\xca","\x1b","\x7b","\x2a"),0,0);
AStatic = hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("AStatic","\xcf","\x77","\x83","\xc9"),4,0);
}


} // end namespace hscript
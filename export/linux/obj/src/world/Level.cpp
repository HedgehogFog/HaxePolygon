// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_world_Level
#include <world/Level.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e87a8023b290038_4_new,"world.Level","new",0x6660a33a,"world.Level.new","world/Level.hx",4,0x39928a77)
namespace world{

void Level_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4e87a8023b290038_4_new)
            	}

Dynamic Level_obj::__CreateEmpty() { return new Level_obj; }

void *Level_obj::_hx_vtable = 0;

Dynamic Level_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Level_obj > _hx_result = new Level_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Level_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09431292;
}


Level_obj::Level_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Level_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Level_obj_sStaticStorageInfo = 0;
#endif

static void Level_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Level_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#endif

hx::Class Level_obj::__mClass;

void Level_obj::__register()
{
	hx::Object *dummy = new Level_obj;
	Level_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("world.Level","\x48","\x3e","\xd4","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Level_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Level_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Level_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Level_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Level_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace world
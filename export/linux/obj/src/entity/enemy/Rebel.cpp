// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_entity_enemy_Rebel
#include <entity/enemy/Rebel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_39b84f35034c75a4_6_new,"entity.enemy.Rebel","new",0xece44a57,"entity.enemy.Rebel.new","entity/enemy/Rebel.hx",6,0xcf2895bb)
namespace entity{
namespace enemy{

void Rebel_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_39b84f35034c75a4_6_new)
HXLINE(   7)		super::__construct(null(),null(),null());
HXLINE(   8)		this->loadGraphic(HX_("assets/images/rebel.png",a6,6e,80,c3),null(),null(),null(),null(),null());
HXLINE(   9)		this->angularVelocity = (int)10;
HXLINE(  10)		this->set_immovable(true);
            	}

Dynamic Rebel_obj::__CreateEmpty() { return new Rebel_obj; }

void *Rebel_obj::_hx_vtable = 0;

Dynamic Rebel_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Rebel_obj > _hx_result = new Rebel_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Rebel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x4fd36c71;
	}
}


hx::ObjectPtr< Rebel_obj > Rebel_obj::__new() {
	hx::ObjectPtr< Rebel_obj > __this = new Rebel_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Rebel_obj > Rebel_obj::__alloc(hx::Ctx *_hx_ctx) {
	Rebel_obj *__this = (Rebel_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Rebel_obj), true, "entity.enemy.Rebel"));
	*(void **)__this = Rebel_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Rebel_obj::Rebel_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Rebel_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Rebel_obj_sStaticStorageInfo = 0;
#endif

static void Rebel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rebel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rebel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rebel_obj::__mClass,"__mClass");
};

#endif

hx::Class Rebel_obj::__mClass;

void Rebel_obj::__register()
{
	hx::Object *dummy = new Rebel_obj;
	Rebel_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entity.enemy.Rebel","\xe5","\xd2","\x94","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Rebel_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Rebel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Rebel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rebel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rebel_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace entity
} // end namespace enemy

// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6325b0c027895dfe_51_new,"openfl.display.Shape","new",0x7b6756e9,"openfl.display.Shape.new","openfl/display/Shape.hx",51,0xe963f3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6325b0c027895dfe_63_get_graphics,"openfl.display.Shape","get_graphics",0xb4a78d2b,"openfl.display.Shape.get_graphics","openfl/display/Shape.hx",63,0xe963f3a9)
namespace openfl{
namespace display{

void Shape_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6325b0c027895dfe_51_new)
HXDLIN(  51)		super::__construct();
            	}

Dynamic Shape_obj::__CreateEmpty() { return new Shape_obj; }

void *Shape_obj::_hx_vtable = 0;

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Shape_obj > _hx_result = new Shape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Shape_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x01c05e1f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x01c05e1f;
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		return inClassId==(int)0x1b123bf8;
	}
}

 ::openfl::display::Graphics Shape_obj::get_graphics(){
            	HX_GC_STACKFRAME(&_hx_pos_6325b0c027895dfe_63_get_graphics)
HXLINE(  65)		if (hx::IsNull( this->_hx___graphics )) {
HXLINE(  67)			this->_hx___graphics =  ::openfl::display::Graphics_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  71)		return this->_hx___graphics;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_graphics,return )


hx::ObjectPtr< Shape_obj > Shape_obj::__new() {
	hx::ObjectPtr< Shape_obj > __this = new Shape_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Shape_obj > Shape_obj::__alloc(hx::Ctx *_hx_ctx) {
	Shape_obj *__this = (Shape_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Shape_obj), true, "openfl.display.Shape"));
	*(void **)__this = Shape_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Shape_obj::Shape_obj()
{
}

hx::Val Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_graphics() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return hx::Val( get_graphics_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Shape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Shape_obj_sStaticStorageInfo = 0;
#endif

static ::String Shape_obj_sMemberFields[] = {
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	::String(null()) };

static void Shape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Shape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#endif

hx::Class Shape_obj::__mClass;

void Shape_obj::__register()
{
	hx::Object *dummy = new Shape_obj;
	Shape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Shape","\x77","\xae","\x8d","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Shape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Shape_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Shape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display

// Generated by Haxe 3.4.7
#ifndef INCLUDED_state_Preloader
#define INCLUDED_state_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_FlxBasePreloader
#include <flixel/system/FlxBasePreloader.h>
#endif
HX_DECLARE_CLASS2(flixel,_hx_system,FlxBasePreloader)
HX_DECLARE_CLASS3(flixel,_hx_system,_FlxBasePreloader,DefaultPreloader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(state,Preloader)

namespace state{


class HXCPP_CLASS_ATTRIBUTES Preloader_obj : public  ::flixel::_hx_system::FlxBasePreloader_obj
{
	public:
		typedef  ::flixel::_hx_system::FlxBasePreloader_obj super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();

	public:
		enum { _hx_ClassId = 0x33a4cb25 };

		void __construct(hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="state.Preloader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"state.Preloader"); }
		static hx::ObjectPtr< Preloader_obj > __new(hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static hx::ObjectPtr< Preloader_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Preloader","\x56","\xc4","\x4e","\x24"); }

		void create();

		void destroy();

		void update(Float Percent);

};

} // end namespace state

#endif /* INCLUDED_state_Preloader */ 
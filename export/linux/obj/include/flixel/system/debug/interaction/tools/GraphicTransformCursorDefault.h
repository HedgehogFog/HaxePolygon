// Generated by Haxe 3.4.7
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicTransformCursorDefault
#define INCLUDED_flixel_system_debug_interaction_tools_GraphicTransformCursorDefault

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,GraphicTransformCursorDefault)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES GraphicTransformCursorDefault_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicTransformCursorDefault_obj OBJ_;
		GraphicTransformCursorDefault_obj();

	public:
		enum { _hx_ClassId = 0x7190a316 };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.GraphicTransformCursorDefault")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools.GraphicTransformCursorDefault"); }
		static hx::ObjectPtr< GraphicTransformCursorDefault_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static hx::ObjectPtr< GraphicTransformCursorDefault_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicTransformCursorDefault_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicTransformCursorDefault","\x27","\x24","\x65","\xdc"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_GraphicTransformCursorDefault */ 
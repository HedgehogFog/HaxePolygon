// Generated by Haxe 3.4.7
#ifndef INCLUDED_flixel_util_FlxSort
#define INCLUDED_flixel_util_FlxSort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,util,FlxSort)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxSort_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxSort_obj OBJ_;
		FlxSort_obj();

	public:
		enum { _hx_ClassId = 0x7feb7832 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxSort")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util.FlxSort"); }

		hx::ObjectPtr< FlxSort_obj > __new() {
			hx::ObjectPtr< FlxSort_obj > __this = new FlxSort_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FlxSort_obj > __alloc(hx::Ctx *_hx_ctx) {
			FlxSort_obj *__this = (FlxSort_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxSort_obj), false, "flixel.util.FlxSort"));
			*(void **)__this = FlxSort_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSort_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxSort","\xd0","\x60","\xb0","\xdc"); }

		static void __boot();
		static int ASCENDING;
		static int DESCENDING;
		static int byY(int Order, ::flixel::FlxObject Obj1, ::flixel::FlxObject Obj2);
		static ::Dynamic byY_dyn();

		static int byValues(int Order,Float Value1,Float Value2);
		static ::Dynamic byValues_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSort */ 

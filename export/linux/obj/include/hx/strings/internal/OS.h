// Generated by Haxe 3.4.7
#ifndef INCLUDED_hx_strings_internal_OS
#define INCLUDED_hx_strings_internal_OS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hx,strings,internal,OS)

namespace hx{
namespace strings{
namespace internal{


class HXCPP_CLASS_ATTRIBUTES OS_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OS_obj OBJ_;
		OS_obj();

	public:
		enum { _hx_ClassId = 0x453199af };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.internal.OS")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hx.strings.internal.OS"); }

		hx::ObjectPtr< OS_obj > __new() {
			hx::ObjectPtr< OS_obj > __this = new OS_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< OS_obj > __alloc(hx::Ctx *_hx_ctx) {
			OS_obj *__this = (OS_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OS_obj), false, "hx.strings.internal.OS"));
			*(void **)__this = OS_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OS_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OS","\x24","\x45","\x00","\x00"); }

		static void __boot();
		static bool isWindows;
};

} // end namespace hx
} // end namespace strings
} // end namespace internal

#endif /* INCLUDED_hx_strings_internal_OS */ 
// Generated by Haxe 3.4.7
#ifndef INCLUDED_haxe__Unserializer_NullResolver
#define INCLUDED_haxe__Unserializer_NullResolver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_82fb9a78bb7ac900_482_new)
HX_DECLARE_CLASS2(haxe,_Unserializer,NullResolver)

namespace haxe{
namespace _Unserializer{


class HXCPP_CLASS_ATTRIBUTES NullResolver_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NullResolver_obj OBJ_;
		NullResolver_obj();

	public:
		enum { _hx_ClassId = 0x043139e5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe._Unserializer.NullResolver")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe._Unserializer.NullResolver"); }

		hx::ObjectPtr< NullResolver_obj > __new() {
			hx::ObjectPtr< NullResolver_obj > __this = new NullResolver_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< NullResolver_obj > __alloc(hx::Ctx *_hx_ctx) {
			NullResolver_obj *__this = (NullResolver_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NullResolver_obj), false, "haxe._Unserializer.NullResolver"));
			*(void **)__this = NullResolver_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_82fb9a78bb7ac900_482_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NullResolver_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NullResolver","\xcd","\x81","\x9f","\xf1"); }

		static  ::haxe::_Unserializer::NullResolver instance;
		hx::Class resolveClass(::String name);
		::Dynamic resolveClass_dyn();

		hx::Class resolveEnum(::String name);
		::Dynamic resolveEnum_dyn();

};

} // end namespace haxe
} // end namespace _Unserializer

#endif /* INCLUDED_haxe__Unserializer_NullResolver */ 

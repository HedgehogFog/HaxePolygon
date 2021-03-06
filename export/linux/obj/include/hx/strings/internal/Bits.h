// Generated by Haxe 3.4.7
#ifndef INCLUDED_hx_strings_internal_Bits
#define INCLUDED_hx_strings_internal_Bits

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hx,strings,internal,Bits)

namespace hx{
namespace strings{
namespace internal{


class HXCPP_CLASS_ATTRIBUTES Bits_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Bits_obj OBJ_;
		Bits_obj();

	public:
		enum { _hx_ClassId = 0x1f87f471 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.internal.Bits")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hx.strings.internal.Bits"); }

		hx::ObjectPtr< Bits_obj > __new() {
			hx::ObjectPtr< Bits_obj > __this = new Bits_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Bits_obj > __alloc(hx::Ctx *_hx_ctx) {
			Bits_obj *__this = (Bits_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bits_obj), false, "hx.strings.internal.Bits"));
			*(void **)__this = Bits_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bits_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Bits","\x26","\x27","\xf0","\x2b"); }

		static int clearBit(int num,int bitPos);
		static ::Dynamic clearBit_dyn();

		static int setBit(int num,int bitPos);
		static ::Dynamic setBit_dyn();

		static int toggleBit(int num,int bitPos);
		static ::Dynamic toggleBit_dyn();

		static bool getBit(int num,int bitPos);
		static ::Dynamic getBit_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal

#endif /* INCLUDED_hx_strings_internal_Bits */ 

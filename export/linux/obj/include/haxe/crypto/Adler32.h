// Generated by Haxe 3.4.7
#ifndef INCLUDED_haxe_crypto_Adler32
#define INCLUDED_haxe_crypto_Adler32

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Adler32)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES Adler32_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Adler32_obj OBJ_;
		Adler32_obj();

	public:
		enum { _hx_ClassId = 0x4f124546 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Adler32")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.crypto.Adler32"); }
		static hx::ObjectPtr< Adler32_obj > __new();
		static hx::ObjectPtr< Adler32_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Adler32_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Adler32","\xd5","\x1c","\x03","\xfd"); }

		static int make( ::haxe::io::Bytes b);
		static ::Dynamic make_dyn();

		int a1;
		int a2;
		int get();
		::Dynamic get_dyn();

		void update( ::haxe::io::Bytes b,int pos,int len);
		::Dynamic update_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Adler32 */ 

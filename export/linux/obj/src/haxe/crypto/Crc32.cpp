// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Crc32
#include <haxe/crypto/Crc32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d37909b7f6cfbea9_67_make,"haxe.crypto.Crc32","make",0x7d9f2fae,"haxe.crypto.Crc32.make","/usr/share/haxe/std/haxe/crypto/Crc32.hx",67,0x64b1ac2b)
namespace haxe{
namespace crypto{

void Crc32_obj::__construct() { }

Dynamic Crc32_obj::__CreateEmpty() { return new Crc32_obj; }

void *Crc32_obj::_hx_vtable = 0;

Dynamic Crc32_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Crc32_obj > _hx_result = new Crc32_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Crc32_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02755a4c;
}

int Crc32_obj::make( ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_d37909b7f6cfbea9_67_make)
HXLINE(  68)		int init = (int)-1;
HXLINE(  69)		int crc = init;
HXLINE(  70)		::Array< unsigned char > b = data->b;
HXLINE(  71)		{
HXLINE(  71)			int _g1 = (int)0;
HXDLIN(  71)			int _g = data->length;
HXDLIN(  71)			while((_g1 < _g)){
HXLINE(  71)				_g1 = (_g1 + (int)1);
HXDLIN(  71)				int i = (_g1 - (int)1);
HXLINE(  72)				int tmp = ((int)((int)crc ^ (int)( (int)(_hx_array_unsafe_get(b,i)) )) & (int)(int)255);
HXLINE(  73)				{
HXLINE(  73)					int _g2 = (int)0;
HXDLIN(  73)					while((_g2 < (int)8)){
HXLINE(  73)						_g2 = (_g2 + (int)1);
HXDLIN(  73)						int j = (_g2 - (int)1);
HXLINE(  74)						if ((((int)tmp & (int)(int)1) == (int)1)) {
HXLINE(  75)							tmp = ((int)hx::UShr(tmp,(int)1) ^ (int)(int)-306674912);
            						}
            						else {
HXLINE(  77)							tmp = hx::UShr(tmp,(int)1);
            						}
            					}
            				}
HXLINE(  79)				crc = ((int)hx::UShr(crc,(int)8) ^ (int)tmp);
            			}
            		}
HXLINE(  81)		return ((int)crc ^ (int)init);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Crc32_obj,make,return )


Crc32_obj::Crc32_obj()
{
}

bool Crc32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Crc32_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Crc32_obj_sStaticStorageInfo = 0;
#endif

static void Crc32_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Crc32_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
};

#endif

hx::Class Crc32_obj::__mClass;

static ::String Crc32_obj_sStaticFields[] = {
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	::String(null())
};

void Crc32_obj::__register()
{
	hx::Object *dummy = new Crc32_obj;
	Crc32_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Crc32","\xae","\x42","\xaf","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Crc32_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Crc32_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Crc32_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Crc32_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Crc32_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Crc32_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Crc32_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto

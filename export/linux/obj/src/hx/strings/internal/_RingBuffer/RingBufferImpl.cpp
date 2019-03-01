// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferImpl
#include <hx/strings/internal/_RingBuffer/RingBufferImpl.h>
#endif
#ifndef INCLUDED_hx_strings_internal__RingBuffer_RingBufferIterator
#include <hx/strings/internal/_RingBuffer/RingBufferIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5aa1c9207f994a9c_34_new,"hx.strings.internal._RingBuffer.RingBufferImpl","new",0xe31a3ca8,"hx.strings.internal._RingBuffer.RingBufferImpl.new","hx/strings/internal/RingBuffer.hx",34,0xc9fcbcc8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aa1c9207f994a9c_62_add,"hx.strings.internal._RingBuffer.RingBufferImpl","add",0xe3105e69,"hx.strings.internal._RingBuffer.RingBufferImpl.add","hx/strings/internal/RingBuffer.hx",62,0xc9fcbcc8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aa1c9207f994a9c_76_get,"hx.strings.internal._RingBuffer.RingBufferImpl","get",0xe314ecde,"hx.strings.internal._RingBuffer.RingBufferImpl.get","hx/strings/internal/RingBuffer.hx",76,0xc9fcbcc8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aa1c9207f994a9c_89_iterator,"hx.strings.internal._RingBuffer.RingBufferImpl","iterator",0x37be58a6,"hx.strings.internal._RingBuffer.RingBufferImpl.iterator","hx/strings/internal/RingBuffer.hx",89,0xc9fcbcc8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aa1c9207f994a9c_92_toArray,"hx.strings.internal._RingBuffer.RingBufferImpl","toArray",0x6b59ea66,"hx.strings.internal._RingBuffer.RingBufferImpl.toArray","hx/strings/internal/RingBuffer.hx",92,0xc9fcbcc8)
namespace hx{
namespace strings{
namespace internal{
namespace _RingBuffer{

void RingBufferImpl_obj::__construct(int size){
            	HX_STACKFRAME(&_hx_pos_5aa1c9207f994a9c_34_new)
HXLINE(  46)		this->length = (int)0;
HXLINE(  43)		this->bufferEndIdx = (int)-1;
HXLINE(  42)		this->bufferStartIdx = (int)0;
HXLINE(  50)		if ((size < (int)1)) {
HXLINE(  51)			HX_STACK_DO_THROW(HX_("[size] must be > 0",c9,8b,76,79));
            		}
HXLINE(  56)		::cpp::VirtualArray this1 = ::cpp::VirtualArray_obj::__new(size);
HXDLIN(  56)		this->buffer = this1;
HXLINE(  58)		this->size = size;
HXLINE(  59)		this->bufferMaxIdx = (size - (int)1);
            	}

Dynamic RingBufferImpl_obj::__CreateEmpty() { return new RingBufferImpl_obj; }

void *RingBufferImpl_obj::_hx_vtable = 0;

Dynamic RingBufferImpl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RingBufferImpl_obj > _hx_result = new RingBufferImpl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RingBufferImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48b7e838;
}

void RingBufferImpl_obj::add( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_5aa1c9207f994a9c_62_add)
HXLINE(  63)		if ((this->length == this->size)) {
HXLINE(  64)			this->bufferEndIdx = this->bufferStartIdx;
HXLINE(  65)			this->bufferStartIdx++;
HXLINE(  66)			if ((this->bufferStartIdx > this->bufferMaxIdx)) {
HXLINE(  67)				this->bufferStartIdx = (int)0;
            			}
            		}
            		else {
HXLINE(  70)			this->bufferEndIdx++;
HXLINE(  71)			this->length++;
            		}
HXLINE(  73)		this->buffer->__unsafe_set(this->bufferEndIdx,item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RingBufferImpl_obj,add,(void))

 ::Dynamic RingBufferImpl_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_5aa1c9207f994a9c_76_get)
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		if ((index >= (int)0)) {
HXLINE(  77)			_hx_tmp = (index > this->bufferMaxIdx);
            		}
            		else {
HXLINE(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  78)			HX_STACK_DO_THROW(((HX_("[index] ",ba,e5,ad,35) + index) + HX_(" is out of bound",1d,d4,8d,f5)));
            		}
HXLINE(  80)		int realIdx = (this->bufferStartIdx + index);
HXLINE(  81)		if ((realIdx > this->bufferMaxIdx)) {
HXLINE(  82)			realIdx = (realIdx - this->length);
            		}
HXLINE(  85)		return _hx_array_unsafe_get(this->buffer,realIdx);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RingBufferImpl_obj,get,return )

 ::Dynamic RingBufferImpl_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_5aa1c9207f994a9c_89_iterator)
HXDLIN(  89)		return  ::hx::strings::internal::_RingBuffer::RingBufferIterator_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(RingBufferImpl_obj,iterator,return )

::cpp::VirtualArray RingBufferImpl_obj::toArray(){
            	HX_STACKFRAME(&_hx_pos_5aa1c9207f994a9c_92_toArray)
HXLINE(  93)		::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE(  94)		{
HXLINE(  94)			 ::Dynamic i = this->iterator();
HXDLIN(  94)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  94)				 ::Dynamic i1 = i->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)();
HXLINE(  95)				arr->push(i1);
            			}
            		}
HXLINE(  97)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RingBufferImpl_obj,toArray,return )


hx::ObjectPtr< RingBufferImpl_obj > RingBufferImpl_obj::__new(int size) {
	hx::ObjectPtr< RingBufferImpl_obj > __this = new RingBufferImpl_obj();
	__this->__construct(size);
	return __this;
}

hx::ObjectPtr< RingBufferImpl_obj > RingBufferImpl_obj::__alloc(hx::Ctx *_hx_ctx,int size) {
	RingBufferImpl_obj *__this = (RingBufferImpl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RingBufferImpl_obj), true, "hx.strings.internal._RingBuffer.RingBufferImpl"));
	*(void **)__this = RingBufferImpl_obj::_hx_vtable;
	__this->__construct(size);
	return __this;
}

RingBufferImpl_obj::RingBufferImpl_obj()
{
}

void RingBufferImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RingBufferImpl);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bufferStartIdx,"bufferStartIdx");
	HX_MARK_MEMBER_NAME(bufferEndIdx,"bufferEndIdx");
	HX_MARK_MEMBER_NAME(bufferMaxIdx,"bufferMaxIdx");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void RingBufferImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bufferStartIdx,"bufferStartIdx");
	HX_VISIT_MEMBER_NAME(bufferEndIdx,"bufferEndIdx");
	HX_VISIT_MEMBER_NAME(bufferMaxIdx,"bufferMaxIdx");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(size,"size");
}

hx::Val RingBufferImpl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toArray") ) { return hx::Val( toArray_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferEndIdx") ) { return hx::Val( bufferEndIdx ); }
		if (HX_FIELD_EQ(inName,"bufferMaxIdx") ) { return hx::Val( bufferMaxIdx ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bufferStartIdx") ) { return hx::Val( bufferStartIdx ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RingBufferImpl_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferEndIdx") ) { bufferEndIdx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferMaxIdx") ) { bufferMaxIdx=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bufferStartIdx") ) { bufferStartIdx=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RingBufferImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("bufferStartIdx","\x1b","\x2a","\x5f","\xdb"));
	outFields->push(HX_HCSTRING("bufferEndIdx","\x42","\x44","\x45","\xff"));
	outFields->push(HX_HCSTRING("bufferMaxIdx","\x19","\xe1","\x22","\xc3"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RingBufferImpl_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(RingBufferImpl_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(RingBufferImpl_obj,bufferStartIdx),HX_HCSTRING("bufferStartIdx","\x1b","\x2a","\x5f","\xdb")},
	{hx::fsInt,(int)offsetof(RingBufferImpl_obj,bufferEndIdx),HX_HCSTRING("bufferEndIdx","\x42","\x44","\x45","\xff")},
	{hx::fsInt,(int)offsetof(RingBufferImpl_obj,bufferMaxIdx),HX_HCSTRING("bufferMaxIdx","\x19","\xe1","\x22","\xc3")},
	{hx::fsInt,(int)offsetof(RingBufferImpl_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(RingBufferImpl_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RingBufferImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String RingBufferImpl_obj_sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("bufferStartIdx","\x1b","\x2a","\x5f","\xdb"),
	HX_HCSTRING("bufferEndIdx","\x42","\x44","\x45","\xff"),
	HX_HCSTRING("bufferMaxIdx","\x19","\xe1","\x22","\xc3"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	::String(null()) };

static void RingBufferImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RingBufferImpl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RingBufferImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RingBufferImpl_obj::__mClass,"__mClass");
};

#endif

hx::Class RingBufferImpl_obj::__mClass;

void RingBufferImpl_obj::__register()
{
	hx::Object *dummy = new RingBufferImpl_obj;
	RingBufferImpl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.strings.internal._RingBuffer.RingBufferImpl","\xb6","\x08","\x4d","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RingBufferImpl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RingBufferImpl_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RingBufferImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RingBufferImpl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RingBufferImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RingBufferImpl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _RingBuffer
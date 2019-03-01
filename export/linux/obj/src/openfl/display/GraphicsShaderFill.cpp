// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShaderFill
#include <openfl/display/GraphicsShaderFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_79031d3822cc8bac_24_new,"openfl.display.GraphicsShaderFill","new",0x84d6634f,"openfl.display.GraphicsShaderFill.new","openfl/display/GraphicsShaderFill.hx",24,0xed3e46bf)
namespace openfl{
namespace display{

void GraphicsShaderFill_obj::__construct( ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_79031d3822cc8bac_24_new)
HXLINE(  26)		this->shader = shader;
HXLINE(  27)		this->matrix = matrix;
HXLINE(  29)		this->_hx___graphicsDataType = ::openfl::display::GraphicsDataType_obj::SHADER_dyn();
HXLINE(  30)		this->_hx___graphicsFillType = ::openfl::display::GraphicsFillType_obj::SHADER_FILL_dyn();
            	}

Dynamic GraphicsShaderFill_obj::__CreateEmpty() { return new GraphicsShaderFill_obj; }

void *GraphicsShaderFill_obj::_hx_vtable = 0;

Dynamic GraphicsShaderFill_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsShaderFill_obj > _hx_result = new GraphicsShaderFill_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GraphicsShaderFill_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08bde4e1;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsShaderFill__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsFill_obj _hx_openfl_display_GraphicsShaderFill__hx_openfl_display_IGraphicsFill= {
};

void *GraphicsShaderFill_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsShaderFill__hx_openfl_display_IGraphicsData;
		case (int)0xc2d06665: return &_hx_openfl_display_GraphicsShaderFill__hx_openfl_display_IGraphicsFill;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


hx::ObjectPtr< GraphicsShaderFill_obj > GraphicsShaderFill_obj::__new( ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix) {
	hx::ObjectPtr< GraphicsShaderFill_obj > __this = new GraphicsShaderFill_obj();
	__this->__construct(shader,matrix);
	return __this;
}

hx::ObjectPtr< GraphicsShaderFill_obj > GraphicsShaderFill_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix) {
	GraphicsShaderFill_obj *__this = (GraphicsShaderFill_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsShaderFill_obj), true, "openfl.display.GraphicsShaderFill"));
	*(void **)__this = GraphicsShaderFill_obj::_hx_vtable;
	__this->__construct(shader,matrix);
	return __this;
}

GraphicsShaderFill_obj::GraphicsShaderFill_obj()
{
}

void GraphicsShaderFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsShaderFill);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsShaderFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
}

hx::Val GraphicsShaderFill_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return hx::Val( _hx___graphicsDataType ); }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return hx::Val( _hx___graphicsFillType ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GraphicsShaderFill_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast<  ::openfl::display::GraphicsDataType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { _hx___graphicsFillType=inValue.Cast<  ::openfl::display::GraphicsFillType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsShaderFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	outFields->push(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GraphicsShaderFill_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(GraphicsShaderFill_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GraphicsShaderFill_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsShaderFill_obj,_hx___graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{hx::fsObject /*::openfl::display::GraphicsFillType*/ ,(int)offsetof(GraphicsShaderFill_obj,_hx___graphicsFillType),HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GraphicsShaderFill_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsShaderFill_obj_sMemberFields[] = {
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void GraphicsShaderFill_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsShaderFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsShaderFill_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsShaderFill_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsShaderFill_obj::__mClass;

void GraphicsShaderFill_obj::__register()
{
	hx::Object *dummy = new GraphicsShaderFill_obj;
	GraphicsShaderFill_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsShaderFill","\xdd","\x0f","\x59","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicsShaderFill_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GraphicsShaderFill_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsShaderFill_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsShaderFill_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsShaderFill_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsShaderFill_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display

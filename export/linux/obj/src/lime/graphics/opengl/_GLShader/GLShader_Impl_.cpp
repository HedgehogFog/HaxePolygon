// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_
#include <lime/graphics/opengl/_GLShader/GLShader_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ed6f09c812e3a5e5_20_fromInt,"lime.graphics.opengl._GLShader.GLShader_Impl_","fromInt",0xb772897b,"lime.graphics.opengl._GLShader.GLShader_Impl_.fromInt","lime/graphics/opengl/GLShader.hx",20,0x4f56a5be)
HX_LOCAL_STACK_FRAME(_hx_pos_ed6f09c812e3a5e5_26_fromSource,"lime.graphics.opengl._GLShader.GLShader_Impl_","fromSource",0x6f4e93cf,"lime.graphics.opengl._GLShader.GLShader_Impl_.fromSource","lime/graphics/opengl/GLShader.hx",26,0x4f56a5be)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLShader{

void GLShader_Impl__obj::__construct() { }

Dynamic GLShader_Impl__obj::__CreateEmpty() { return new GLShader_Impl__obj; }

void *GLShader_Impl__obj::_hx_vtable = 0;

Dynamic GLShader_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLShader_Impl__obj > _hx_result = new GLShader_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLShader_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ac0865c;
}

 ::lime::graphics::opengl::GLObject GLShader_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_ed6f09c812e3a5e5_20_fromInt)
HXDLIN(  20)		return ::lime::graphics::opengl::GLObject_obj::fromInt((int)2,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,fromInt,return )

 ::lime::graphics::opengl::GLObject GLShader_Impl__obj::fromSource( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl,::String source,int type){
            	HX_STACKFRAME(&_hx_pos_ed6f09c812e3a5e5_26_fromSource)
HXLINE(  28)		 ::lime::graphics::opengl::GLObject shader = gl->createShader(type);
HXLINE(  29)		gl->shaderSource(shader,source);
HXLINE(  30)		gl->compileShader(shader);
HXLINE(  32)		if (hx::IsEq( gl->getShaderParameter(shader,gl->COMPILE_STATUS),(int)0 )) {
HXLINE(  34)			::String message;
HXLINE(  36)			if ((type == gl->VERTEX_SHADER)) {
HXLINE(  36)				message = HX_("Error compiling vertex shader",39,c9,c1,b2);
            			}
            			else {
HXLINE(  37)				if ((type == gl->FRAGMENT_SHADER)) {
HXLINE(  37)					message = HX_("Error compiling fragment shader",4d,d0,be,e3);
            				}
            				else {
HXLINE(  38)					message = HX_("Error compiling unknown shader type",d7,06,f2,00);
            				}
            			}
HXLINE(  40)			message = (message + (HX_("\n",0a,00,00,00) + gl->getShaderInfoLog(shader)));
HXLINE(  41)			::lime::utils::Log_obj::error(message,hx::SourceInfo(HX_("GLShader.hx",d4,fd,d6,a4),41,HX_("lime.graphics.opengl._GLShader.GLShader_Impl_",44,46,91,94),HX_("fromSource",e5,b5,75,75)));
            		}
HXLINE(  45)		return shader;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLShader_Impl__obj,fromSource,return )


GLShader_Impl__obj::GLShader_Impl__obj()
{
}

bool GLShader_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromSource") ) { outValue = fromSource_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLShader_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLShader_Impl__obj_sStaticStorageInfo = 0;
#endif

static void GLShader_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShader_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLShader_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLShader_Impl__obj::__mClass;

static ::String GLShader_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("fromSource","\xe5","\xb5","\x75","\x75"),
	::String(null())
};

void GLShader_Impl__obj::__register()
{
	hx::Object *dummy = new GLShader_Impl__obj;
	GLShader_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLShader.GLShader_Impl_","\x44","\x46","\x91","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShader_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLShader_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLShader_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShader_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLShader_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLShader_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLShader_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLShader
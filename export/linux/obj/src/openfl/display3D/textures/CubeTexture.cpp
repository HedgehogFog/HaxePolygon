// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_atf_ATFReader
#include <openfl/_internal/formats/atf/ATFReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_SamplerState
#include <openfl/_internal/renderer/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccb53fcc86b81631_35_new,"openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",35,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_53_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",53,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_61_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",61,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_73_uploadFromBitmapData,"openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",73,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_122_uploadFromByteArray,"openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",122,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_128_uploadFromTypedArray,"openfl.display3D.textures.CubeTexture","uploadFromTypedArray",0xb8da2b3f,"openfl.display3D.textures.CubeTexture.uploadFromTypedArray","openfl/display3D/textures/CubeTexture.hx",128,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_148___getGLFramebuffer,"openfl.display3D.textures.CubeTexture","__getGLFramebuffer",0x0b1986d7,"openfl.display3D.textures.CubeTexture.__getGLFramebuffer","openfl/display3D/textures/CubeTexture.hx",148,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_185___setSamplerState,"openfl.display3D.textures.CubeTexture","__setSamplerState",0x909e23e6,"openfl.display3D.textures.CubeTexture.__setSamplerState","openfl/display3D/textures/CubeTexture.hx",185,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_225___sideToTarget,"openfl.display3D.textures.CubeTexture","__sideToTarget",0x72cba3c8,"openfl.display3D.textures.CubeTexture.__sideToTarget","openfl/display3D/textures/CubeTexture.hx",225,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_256___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","__uploadCompressedTextureFromByteArray",0x02145eb3,"openfl.display3D.textures.CubeTexture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",256,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_244___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","__uploadCompressedTextureFromByteArray",0x02145eb3,"openfl.display3D.textures.CubeTexture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",244,0xffe9b114)
static const bool _hx_array_data_3a151a09_13[] = {
	0,
};
namespace openfl{
namespace display3D{
namespace textures{

void CubeTexture_obj::__construct( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_35_new)
HXLINE(  37)		super::__construct(context);
HXLINE(  39)		this->_hx___size = size;
HXLINE(  40)		this->_hx___width = (this->_hx___height = this->_hx___size);
HXLINE(  42)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  43)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  45)		this->_hx___textureTarget = this->_hx___context->gl->TEXTURE_CUBE_MAP;
HXLINE(  46)		this->_hx___uploadedSides = (int)0;
            	}

Dynamic CubeTexture_obj::__CreateEmpty() { return new CubeTexture_obj; }

void *CubeTexture_obj::_hx_vtable = 0;

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CubeTexture_obj > _hx_result = new CubeTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool CubeTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19affbf1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x2d6abef7;
	}
}

void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_53_uploadCompressedTextureFromByteArray)
HXDLIN(  53)		 ::openfl::display3D::textures::CubeTexture _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  55)		if (!(async)) {
HXLINE(  57)			this->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::CubeTexture,_gthis, ::openfl::utils::ByteArrayData,data,int,byteArrayOffset) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_61_uploadCompressedTextureFromByteArray)
HXLINE(  63)				_gthis->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
HXLINE(  64)				_gthis->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null()));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  61)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis,data,byteArrayOffset)),(int)1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

void CubeTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,int side,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_73_uploadFromBitmapData)
HXLINE(  76)		if (hx::IsNull( source )) {
HXLINE(  76)			return;
            		}
HXLINE(  77)		int size = ((int)this->_hx___size >> (int)miplevel);
HXLINE(  78)		if ((size == (int)0)) {
HXLINE(  78)			return;
            		}
HXLINE(  80)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE(  81)		if (hx::IsNull( image )) {
HXLINE(  81)			return;
            		}
HXLINE( 104)		this->uploadFromTypedArray(image->get_data(),side,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromBitmapData,(void))

void CubeTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_122_uploadFromByteArray)
HXDLIN( 122)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 122)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 122)		if (hx::IsNotNull( buffer )) {
HXDLIN( 122)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 122)			int in_byteOffset = byteArrayOffset;
HXDLIN( 122)			if ((in_byteOffset < (int)0)) {
HXDLIN( 122)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 122)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 122)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 122)			int bufferByteLength = buffer->length;
HXDLIN( 122)			int elementSize = _this->bytesPerElement;
HXDLIN( 122)			int newByteLength = bufferByteLength;
HXDLIN( 122)			{
HXDLIN( 122)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 122)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 122)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 122)				if ((newByteLength < (int)0)) {
HXDLIN( 122)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 122)			_this->buffer = buffer;
HXDLIN( 122)			_this->byteOffset = in_byteOffset;
HXDLIN( 122)			_this->byteLength = newByteLength;
HXDLIN( 122)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 122)			this1 = _this;
            		}
            		else {
HXDLIN( 122)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 122)		this->uploadFromTypedArray(this1,side,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))

void CubeTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_128_uploadFromTypedArray)
HXLINE( 130)		if (hx::IsNull( data )) {
HXLINE( 130)			return;
            		}
HXLINE( 132)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 134)		int size = ((int)this->_hx___size >> (int)miplevel);
HXLINE( 135)		if ((size == (int)0)) {
HXLINE( 135)			return;
            		}
HXLINE( 137)		int target = this->_hx___sideToTarget(side);
HXLINE( 139)		this->_hx___context->_hx___bindGLTextureCubeMap(this->_hx___textureID);
HXLINE( 140)		{
HXLINE( 140)			int internalformat = this->_hx___internalFormat;
HXDLIN( 140)			int format = this->_hx___format;
HXDLIN( 140)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 140)			{
HXLINE( 140)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),(int)0);
HXDLIN( 140)				gl->texImage2D(target,miplevel,internalformat,size,size,(int)0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 141)		this->_hx___context->_hx___bindGLTextureCubeMap(null());
HXLINE( 143)		 ::openfl::display3D::textures::CubeTexture _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 143)		_hx_tmp->_hx___uploadedSides = ((int)_hx_tmp->_hx___uploadedSides | (int)((int)(int)1 << (int)side));
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromTypedArray,(void))

 ::lime::graphics::opengl::GLObject CubeTexture_obj::_hx___getGLFramebuffer(bool enableDepthAndStencil,int antiAlias,int surfaceSelector){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_148___getGLFramebuffer)
HXLINE( 150)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 152)		if (hx::IsNull( this->_hx___glFramebuffer )) {
HXLINE( 154)			this->_hx___glFramebuffer = gl->createFramebuffer();
HXLINE( 155)			this->_hx___framebufferSurface = (int)-1;
            		}
HXLINE( 159)		if ((this->_hx___framebufferSurface != surfaceSelector)) {
HXLINE( 161)			this->_hx___framebufferSurface = surfaceSelector;
HXLINE( 163)			this->_hx___context->_hx___bindGLFramebuffer(this->_hx___glFramebuffer);
HXLINE( 164)			gl->framebufferTexture2D(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,(gl->TEXTURE_CUBE_MAP_POSITIVE_X + surfaceSelector),this->_hx___textureID,(int)0);
HXLINE( 166)			if (this->_hx___context->_hx___enableErrorChecking) {
HXLINE( 168)				int code = gl->checkFramebufferStatus(gl->FRAMEBUFFER);
HXLINE( 170)				if ((code != gl->FRAMEBUFFER_COMPLETE)) {
HXLINE( 172)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 172)					_hx_tmp((((((HX_("Error: Context3D.setRenderToTexture status:",4c,0a,86,52) + code) + HX_(" width:",94,67,ab,7e)) + this->_hx___width) + HX_(" height:",53,26,89,26)) + this->_hx___height),hx::SourceInfo(HX_("CubeTexture.hx",38,ae,c0,7e),172,HX_("openfl.display3D.textures.CubeTexture",09,1a,15,3a),HX_("__getGLFramebuffer",92,f3,72,c9)));
            				}
            			}
            		}
HXLINE( 180)		return this->super::_hx___getGLFramebuffer(enableDepthAndStencil,antiAlias,surfaceSelector);
            	}


bool CubeTexture_obj::_hx___setSamplerState( ::openfl::_internal::renderer::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_185___setSamplerState)
HXLINE( 187)		if (this->super::_hx___setSamplerState(state)) {
HXLINE( 189)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 191)			bool _hx_tmp;
HXDLIN( 191)			if (hx::IsNotEq( state->mipfilter,(int)2 )) {
HXLINE( 191)				_hx_tmp = !(this->_hx___samplerState->mipmapGenerated);
            			}
            			else {
HXLINE( 191)				_hx_tmp = false;
            			}
HXDLIN( 191)			if (_hx_tmp) {
HXLINE( 193)				gl->generateMipmap(gl->TEXTURE_CUBE_MAP);
HXLINE( 194)				this->_hx___samplerState->mipmapGenerated = true;
            			}
HXLINE( 198)			if ((::openfl::display3D::Context3D_obj::GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT != (int)0)) {
HXLINE( 200)				int aniso;
HXDLIN( 200)				 ::Dynamic _g = state->filter;
HXDLIN( 200)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==(int)0) ){
HXLINE( 200)					aniso = (int)16;
HXDLIN( 200)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==(int)1) ){
HXLINE( 200)					aniso = (int)2;
HXDLIN( 200)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==(int)2) ){
HXLINE( 200)					aniso = (int)4;
HXDLIN( 200)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==(int)3) ){
HXLINE( 200)					aniso = (int)8;
HXDLIN( 200)					goto _hx_goto_7;
            				}
            				/* default */{
HXLINE( 200)					aniso = (int)1;
            				}
            				_hx_goto_7:;
HXLINE( 208)				if ((aniso > ::openfl::display3D::Context3D_obj::GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT)) {
HXLINE( 209)					aniso = ::openfl::display3D::Context3D_obj::GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT;
            				}
HXLINE( 212)				gl->texParameterf(gl->TEXTURE_CUBE_MAP,::openfl::display3D::Context3D_obj::GL_TEXTURE_MAX_ANISOTROPY_EXT,aniso);
            			}
HXLINE( 216)			return true;
            		}
HXLINE( 220)		return false;
            	}


int CubeTexture_obj::_hx___sideToTarget(int side){
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_225___sideToTarget)
HXLINE( 227)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 229)		switch((int)(side)){
            			case (int)0: {
HXLINE( 231)				return gl->TEXTURE_CUBE_MAP_POSITIVE_X;
            			}
            			break;
            			case (int)1: {
HXLINE( 232)				return gl->TEXTURE_CUBE_MAP_NEGATIVE_X;
            			}
            			break;
            			case (int)2: {
HXLINE( 233)				return gl->TEXTURE_CUBE_MAP_POSITIVE_Y;
            			}
            			break;
            			case (int)3: {
HXLINE( 234)				return gl->TEXTURE_CUBE_MAP_NEGATIVE_Y;
            			}
            			break;
            			case (int)4: {
HXLINE( 235)				return gl->TEXTURE_CUBE_MAP_POSITIVE_Z;
            			}
            			break;
            			case (int)5: {
HXLINE( 236)				return gl->TEXTURE_CUBE_MAP_NEGATIVE_Z;
            			}
            			break;
            			default:{
HXLINE( 237)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 229)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,_hx___sideToTarget,return )

void CubeTexture_obj::_hx___uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::CubeTexture,_gthis,::Array< bool >,hasTexture,bool,alpha, ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) HXARGC(7)
            		void _hx_run(int side,int level,int gpuFormat,int width,int height,int blockLength, ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_256___uploadCompressedTextureFromByteArray)
HXLINE( 258)			 ::Dynamic format;
HXDLIN( 258)			if (alpha) {
HXLINE( 258)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->get(gpuFormat);
            			}
            			else {
HXLINE( 258)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->get(gpuFormat);
            			}
HXLINE( 259)			if (hx::IsEq( format,(int)0 )) {
HXLINE( 259)				return;
            			}
HXLINE( 261)			hasTexture[(int)0] = true;
HXLINE( 262)			int target = _gthis->_hx___sideToTarget(side);
HXLINE( 264)			_gthis->_hx___format = format;
HXLINE( 265)			_gthis->_hx___internalFormat = format;
HXLINE( 267)			bool _hx_tmp;
HXDLIN( 267)			if (alpha) {
HXLINE( 267)				_hx_tmp = (gpuFormat == (int)2);
            			}
            			else {
HXLINE( 267)				_hx_tmp = false;
            			}
HXDLIN( 267)			if (_hx_tmp) {
HXLINE( 269)				int size = ::Std_obj::_hx_int(((Float)blockLength / (Float)(int)2));
HXLINE( 271)				int _gthis1 = _gthis->_hx___internalFormat;
HXDLIN( 271)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 271)				if (hx::IsNotNull( bytes )) {
HXLINE( 271)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 271)					int in_byteOffset = (int)0;
HXDLIN( 271)					if ((in_byteOffset < (int)0)) {
HXLINE( 271)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 271)					if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 271)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 271)					int bufferByteLength = bytes->length;
HXDLIN( 271)					int elementSize = _this->bytesPerElement;
HXDLIN( 271)					int newByteLength = bufferByteLength;
HXDLIN( 271)					if (hx::IsNull( size )) {
HXLINE( 271)						newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 271)						if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 271)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 271)						if ((newByteLength < (int)0)) {
HXLINE( 271)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE( 271)						newByteLength = (size * _this->bytesPerElement);
HXDLIN( 271)						int newRange = (in_byteOffset + newByteLength);
HXDLIN( 271)						if ((newRange > bufferByteLength)) {
HXLINE( 271)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 271)					_this->buffer = bytes;
HXDLIN( 271)					_this->byteOffset = in_byteOffset;
HXDLIN( 271)					_this->byteLength = newByteLength;
HXDLIN( 271)					_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 271)					this1 = _this;
            				}
            				else {
HXLINE( 271)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN( 271)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl,target,level,_gthis1,width,height,(int)0,this1);
HXLINE( 273)				 ::openfl::display3D::textures::CubeTexture alphaTexture =  ::openfl::display3D::textures::CubeTexture_obj::__alloc( HX_CTX ,_gthis->_hx___context,_gthis->_hx___size,(int)3,_gthis->_hx___optimizeForRenderToTexture,_gthis->_hx___streamingLevels);
HXLINE( 274)				alphaTexture->_hx___format = format;
HXLINE( 275)				alphaTexture->_hx___internalFormat = format;
HXLINE( 277)				_gthis->_hx___context->_hx___bindGLTextureCubeMap(alphaTexture->_hx___textureID);
HXLINE( 278)				int alphaTexture1 = alphaTexture->_hx___internalFormat;
HXDLIN( 278)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 278)				if (hx::IsNotNull( bytes )) {
HXLINE( 278)					 ::lime::utils::ArrayBufferView _this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 278)					int in_byteOffset1 = size;
HXDLIN( 278)					if ((in_byteOffset1 < (int)0)) {
HXLINE( 278)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 278)					if ((hx::Mod(in_byteOffset1,_this1->bytesPerElement) != (int)0)) {
HXLINE( 278)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 278)					int bufferByteLength1 = bytes->length;
HXDLIN( 278)					int elementSize1 = _this1->bytesPerElement;
HXDLIN( 278)					int newByteLength1 = bufferByteLength1;
HXDLIN( 278)					if (hx::IsNull( size )) {
HXLINE( 278)						newByteLength1 = (bufferByteLength1 - in_byteOffset1);
HXDLIN( 278)						if ((hx::Mod(bufferByteLength1,_this1->bytesPerElement) != (int)0)) {
HXLINE( 278)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 278)						if ((newByteLength1 < (int)0)) {
HXLINE( 278)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE( 278)						newByteLength1 = (size * _this1->bytesPerElement);
HXDLIN( 278)						int newRange1 = (in_byteOffset1 + newByteLength1);
HXDLIN( 278)						if ((newRange1 > bufferByteLength1)) {
HXLINE( 278)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 278)					_this1->buffer = bytes;
HXDLIN( 278)					_this1->byteOffset = in_byteOffset1;
HXDLIN( 278)					_this1->byteLength = newByteLength1;
HXDLIN( 278)					_this1->length = ::Std_obj::_hx_int(((Float)newByteLength1 / (Float)_this1->bytesPerElement));
HXDLIN( 278)					this2 = _this1;
            				}
            				else {
HXLINE( 278)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN( 278)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl,target,level,alphaTexture1,width,height,(int)0,this2);
HXLINE( 280)				_gthis->_hx___alphaTexture = alphaTexture;
            			}
            			else {
HXLINE( 284)				int _gthis2 = _gthis->_hx___internalFormat;
HXDLIN( 284)				 ::lime::utils::ArrayBufferView this3;
HXDLIN( 284)				if (hx::IsNotNull( bytes )) {
HXLINE( 284)					 ::lime::utils::ArrayBufferView _this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 284)					int in_byteOffset2 = (int)0;
HXDLIN( 284)					if ((in_byteOffset2 < (int)0)) {
HXLINE( 284)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 284)					if ((hx::Mod(in_byteOffset2,_this2->bytesPerElement) != (int)0)) {
HXLINE( 284)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 284)					int bufferByteLength2 = bytes->length;
HXDLIN( 284)					int elementSize2 = _this2->bytesPerElement;
HXDLIN( 284)					int newByteLength2 = bufferByteLength2;
HXDLIN( 284)					if (hx::IsNull( blockLength )) {
HXLINE( 284)						newByteLength2 = (bufferByteLength2 - in_byteOffset2);
HXDLIN( 284)						if ((hx::Mod(bufferByteLength2,_this2->bytesPerElement) != (int)0)) {
HXLINE( 284)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 284)						if ((newByteLength2 < (int)0)) {
HXLINE( 284)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE( 284)						newByteLength2 = (blockLength * _this2->bytesPerElement);
HXDLIN( 284)						int newRange2 = (in_byteOffset2 + newByteLength2);
HXDLIN( 284)						if ((newRange2 > bufferByteLength2)) {
HXLINE( 284)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 284)					_this2->buffer = bytes;
HXDLIN( 284)					_this2->byteOffset = in_byteOffset2;
HXDLIN( 284)					_this2->byteLength = newByteLength2;
HXDLIN( 284)					_this2->length = ::Std_obj::_hx_int(((Float)newByteLength2 / (Float)_this2->bytesPerElement));
HXDLIN( 284)					this3 = _this2;
            				}
            				else {
HXLINE( 284)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN( 284)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl,target,level,_gthis2,width,height,(int)0,this3);
            			}
            		}
            		HX_END_LOCAL_FUNC7((void))

            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_244___uploadCompressedTextureFromByteArray)
HXDLIN( 244)		 ::openfl::display3D::textures::CubeTexture _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 246)		 ::openfl::_internal::formats::atf::ATFReader reader =  ::openfl::_internal::formats::atf::ATFReader_obj::__alloc( HX_CTX ,data,byteArrayOffset);
HXLINE( 247)		bool alpha = reader->readHeader(this->_hx___size,this->_hx___size,true);
HXLINE( 249)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 251)		this->_hx___context->_hx___bindGLTextureCubeMap(this->_hx___textureID);
HXLINE( 253)		::Array< bool > hasTexture = ::Array_obj< bool >::fromData( _hx_array_data_3a151a09_13,1);
HXLINE( 256)		reader->readTextures( ::Dynamic(new _hx_Closure_0(_gthis,hasTexture,alpha,gl)));
HXLINE( 290)		if (!(hasTexture->__get((int)0))) {
HXLINE( 292)			int _g = (int)0;
HXDLIN( 292)			while((_g < (int)6)){
HXLINE( 292)				_g = (_g + (int)1);
HXDLIN( 292)				int side1 = (_g - (int)1);
HXLINE( 294)				 ::Dynamic elements = ((this->_hx___size * this->_hx___size) * (int)4);
HXDLIN( 294)				 ::lime::utils::ArrayBufferView this4;
HXDLIN( 294)				if (hx::IsNotNull( elements )) {
HXLINE( 294)					this4 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,(int)4);
            				}
            				else {
HXLINE( 294)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN( 294)				 ::lime::utils::ArrayBufferView data1 = this4;
HXLINE( 295)				{
HXLINE( 295)					int target1 = this->_hx___sideToTarget(side1);
HXDLIN( 295)					int internalformat = this->_hx___internalFormat;
HXDLIN( 295)					int width1 = this->_hx___size;
HXDLIN( 295)					int height1 = this->_hx___size;
HXDLIN( 295)					int format1 = this->_hx___format;
HXDLIN( 295)					int type = gl->UNSIGNED_BYTE;
HXDLIN( 295)					{
HXLINE( 295)						::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data1,null(),(int)0);
HXDLIN( 295)						gl->texImage2D(target1,(int)0,internalformat,width1,height1,(int)0,format1,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            					}
            				}
            			}
            		}
HXLINE( 302)		this->_hx___context->_hx___bindGLTextureCubeMap(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(CubeTexture_obj,_hx___uploadCompressedTextureFromByteArray,(void))


hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	hx::ObjectPtr< CubeTexture_obj > __this = new CubeTexture_obj();
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	CubeTexture_obj *__this = (CubeTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CubeTexture_obj), true, "openfl.display3D.textures.CubeTexture"));
	*(void **)__this = CubeTexture_obj::_hx_vtable;
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

CubeTexture_obj::CubeTexture_obj()
{
}

hx::Val CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return hx::Val( _hx___size ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sideToTarget") ) { return hx::Val( _hx___sideToTarget_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { return hx::Val( _hx___uploadedSides ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__getGLFramebuffer") ) { return hx::Val( _hx___getGLFramebuffer_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferSurface") ) { return hx::Val( _hx___framebufferSurface ); }
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"__uploadCompressedTextureFromByteArray") ) { return hx::Val( _hx___uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CubeTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { _hx___uploadedSides=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferSurface") ) { _hx___framebufferSurface=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__framebufferSurface","\xe0","\x3b","\x24","\xcd"));
	outFields->push(HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"));
	outFields->push(HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CubeTexture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___framebufferSurface),HX_HCSTRING("__framebufferSurface","\xe0","\x3b","\x24","\xcd")},
	{hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___uploadedSides),HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CubeTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeTexture_obj_sMemberFields[] = {
	HX_HCSTRING("__framebufferSurface","\xe0","\x3b","\x24","\xcd"),
	HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"),
	HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__getGLFramebuffer","\x92","\xf3","\x72","\xc9"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__sideToTarget","\x03","\x57","\x2b","\x63"),
	HX_HCSTRING("__uploadCompressedTextureFromByteArray","\xee","\xaa","\x5f","\xfa"),
	::String(null()) };

static void CubeTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubeTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Object *dummy = new CubeTexture_obj;
	CubeTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CubeTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CubeTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubeTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

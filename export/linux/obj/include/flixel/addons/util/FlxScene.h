// Generated by Haxe 3.4.7
#ifndef INCLUDED_flixel_addons_util_FlxScene
#define INCLUDED_flixel_addons_util_FlxScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,util,FlxScene)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxScene_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxScene_obj OBJ_;
		FlxScene_obj();

	public:
		enum { _hx_ClassId = 0x189c6873 };

		void __construct(::String file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.util.FlxScene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.util.FlxScene"); }
		static hx::ObjectPtr< FlxScene_obj > __new(::String file);
		static hx::ObjectPtr< FlxScene_obj > __alloc(hx::Ctx *_hx_ctx,::String file);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxScene_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxScene","\x9a","\xe3","\xab","\x35"); }

		int width;
		int height;
		::String name;
		::String description;
		::String version;
		::String assetsDirectory;
		 ::flixel::tile::FlxTilemap tilemap;
		 ::haxe::ds::StringMap _constants;
		 ::haxe::ds::StringMap _objects;
		 ::Xml _xml;
		 ::haxe::xml::Fast _fastXml;
		void set(::String file);
		::Dynamic set_dyn();

		void spawn( ::flixel::group::FlxTypedGroup container,::String layerId);
		::Dynamic spawn_dyn();

		void loadBackgrounds( ::flixel::group::FlxTypedGroup container);
		::Dynamic loadBackgrounds_dyn();

		void loadTilemap( ::flixel::group::FlxTypedGroup container);
		::Dynamic loadTilemap_dyn();

		void loadEverything();
		::Dynamic loadEverything_dyn();

		void loadConstants();
		::Dynamic loadConstants_dyn();

		void addInstance( ::Dynamic instance, ::flixel::group::FlxTypedGroup container, ::haxe::xml::Fast element);
		::Dynamic addInstance_dyn();

		void applySpriteProperties( ::flixel::FlxSprite instance, ::haxe::xml::Fast element);
		::Dynamic applySpriteProperties_dyn();

		void applyTextProperties( ::flixel::text::FlxText instance, ::haxe::xml::Fast element);
		::Dynamic applyTextProperties_dyn();

		 ::Dynamic _hx_const(::String id);
		::Dynamic _hx_const_dyn();

		 ::Dynamic object(::String id);
		::Dynamic object_dyn();

		bool parseBool(::String value);
		::Dynamic parseBool_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_FlxScene */ 
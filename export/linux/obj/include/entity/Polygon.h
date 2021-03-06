// Generated by Haxe 3.4.7
#ifndef INCLUDED_entity_Polygon
#define INCLUDED_entity_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(entity,Polygon)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace entity{


class HXCPP_CLASS_ATTRIBUTES Polygon_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();

	public:
		enum { _hx_ClassId = 0x54e9f06b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entity.Polygon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entity.Polygon"); }
		static hx::ObjectPtr< Polygon_obj > __new();
		static hx::ObjectPtr< Polygon_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf"); }

		::Array< ::Dynamic> points;
		Float minX;
		Float maxX;
		Float minY;
		Float maxY;
		Float rotation;
		Float scaleSize;
		void update(Float elapsed);

		::Array< ::Dynamic> locPoints;
		void draw();

		 ::flixel::math::FlxPoint centroid;
		void mouseDown(int button,int x,int y);
		::Dynamic mouseDown_dyn();

		::Array< ::Dynamic> getTransformedPoints();
		::Dynamic getTransformedPoints_dyn();

		void boundsFind();
		::Dynamic boundsFind_dyn();

		Float degToRad(Float degrees);
		::Dynamic degToRad_dyn();

};

} // end namespace entity

#endif /* INCLUDED_entity_Polygon */ 

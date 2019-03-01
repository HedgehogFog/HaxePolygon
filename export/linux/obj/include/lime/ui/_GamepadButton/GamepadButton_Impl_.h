// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_ui__GamepadButton_GamepadButton_Impl_
#define INCLUDED_lime_ui__GamepadButton_GamepadButton_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_GamepadButton,GamepadButton_Impl_)

namespace lime{
namespace ui{
namespace _GamepadButton{


class HXCPP_CLASS_ATTRIBUTES GamepadButton_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GamepadButton_Impl__obj OBJ_;
		GamepadButton_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0a40df56 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.ui._GamepadButton.GamepadButton_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.ui._GamepadButton.GamepadButton_Impl_"); }

		hx::ObjectPtr< GamepadButton_Impl__obj > __new() {
			hx::ObjectPtr< GamepadButton_Impl__obj > __this = new GamepadButton_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GamepadButton_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			GamepadButton_Impl__obj *__this = (GamepadButton_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GamepadButton_Impl__obj), false, "lime.ui._GamepadButton.GamepadButton_Impl_"));
			*(void **)__this = GamepadButton_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadButton_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GamepadButton_Impl_","\x33","\x32","\x07","\x6f"); }

		static void __boot();
		static int A;
		static int B;
		static int X;
		static int Y;
		static int BACK;
		static int GUIDE;
		static int START;
		static int LEFT_STICK;
		static int RIGHT_STICK;
		static int LEFT_SHOULDER;
		static int RIGHT_SHOULDER;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadButton

#endif /* INCLUDED_lime_ui__GamepadButton_GamepadButton_Impl_ */ 

// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_ui__KeyCode_KeyCode_Impl_
#define INCLUDED_lime_ui__KeyCode_KeyCode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_KeyCode,KeyCode_Impl_)

namespace lime{
namespace ui{
namespace _KeyCode{


class HXCPP_CLASS_ATTRIBUTES KeyCode_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef KeyCode_Impl__obj OBJ_;
		KeyCode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2ab31f76 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.ui._KeyCode.KeyCode_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.ui._KeyCode.KeyCode_Impl_"); }

		hx::ObjectPtr< KeyCode_Impl__obj > __new() {
			hx::ObjectPtr< KeyCode_Impl__obj > __this = new KeyCode_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< KeyCode_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			KeyCode_Impl__obj *__this = (KeyCode_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(KeyCode_Impl__obj), false, "lime.ui._KeyCode.KeyCode_Impl_"));
			*(void **)__this = KeyCode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyCode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("KeyCode_Impl_","\xec","\x47","\x6b","\x1f"); }

		static void __boot();
		static int UNKNOWN;
		static int BACKSPACE;
		static int TAB;
		static int RETURN;
		static int ESCAPE;
		static int SPACE;
		static int EXCLAMATION;
		static int QUOTE;
		static int HASH;
		static int DOLLAR;
		static int PERCENT;
		static int AMPERSAND;
		static int SINGLE_QUOTE;
		static int LEFT_PARENTHESIS;
		static int RIGHT_PARENTHESIS;
		static int ASTERISK;
		static int PLUS;
		static int COMMA;
		static int MINUS;
		static int PERIOD;
		static int SLASH;
		static int NUMBER_0;
		static int NUMBER_1;
		static int NUMBER_2;
		static int NUMBER_3;
		static int NUMBER_4;
		static int NUMBER_5;
		static int NUMBER_6;
		static int NUMBER_7;
		static int NUMBER_8;
		static int NUMBER_9;
		static int COLON;
		static int SEMICOLON;
		static int LESS_THAN;
		static int EQUALS;
		static int GREATER_THAN;
		static int QUESTION;
		static int AT;
		static int LEFT_BRACKET;
		static int BACKSLASH;
		static int RIGHT_BRACKET;
		static int CARET;
		static int UNDERSCORE;
		static int GRAVE;
		static int A;
		static int B;
		static int C;
		static int D;
		static int E;
		static int F;
		static int G;
		static int H;
		static int I;
		static int J;
		static int K;
		static int L;
		static int M;
		static int N;
		static int O;
		static int P;
		static int Q;
		static int R;
		static int S;
		static int T;
		static int U;
		static int V;
		static int W;
		static int X;
		static int Y;
		static int Z;
		static int DELETE;
		static int CAPS_LOCK;
		static int F1;
		static int F2;
		static int F3;
		static int F4;
		static int F5;
		static int F6;
		static int F7;
		static int F8;
		static int F9;
		static int F10;
		static int F11;
		static int F12;
		static int PRINT_SCREEN;
		static int SCROLL_LOCK;
		static int PAUSE;
		static int INSERT;
		static int HOME;
		static int PAGE_UP;
		static int END;
		static int PAGE_DOWN;
		static int RIGHT;
		static int LEFT;
		static int DOWN;
		static int UP;
		static int NUM_LOCK;
		static int NUMPAD_DIVIDE;
		static int NUMPAD_MULTIPLY;
		static int NUMPAD_MINUS;
		static int NUMPAD_PLUS;
		static int NUMPAD_ENTER;
		static int NUMPAD_1;
		static int NUMPAD_2;
		static int NUMPAD_3;
		static int NUMPAD_4;
		static int NUMPAD_5;
		static int NUMPAD_6;
		static int NUMPAD_7;
		static int NUMPAD_8;
		static int NUMPAD_9;
		static int NUMPAD_0;
		static int NUMPAD_PERIOD;
		static int APPLICATION;
		static int POWER;
		static int NUMPAD_EQUALS;
		static int F13;
		static int F14;
		static int F15;
		static int F16;
		static int F17;
		static int F18;
		static int F19;
		static int F20;
		static int F21;
		static int F22;
		static int F23;
		static int F24;
		static int EXECUTE;
		static int HELP;
		static int MENU;
		static int SELECT;
		static int STOP;
		static int AGAIN;
		static int UNDO;
		static int CUT;
		static int COPY;
		static int PASTE;
		static int FIND;
		static int MUTE;
		static int VOLUME_UP;
		static int VOLUME_DOWN;
		static int NUMPAD_COMMA;
		static int ALT_ERASE;
		static int SYSTEM_REQUEST;
		static int CANCEL;
		static int CLEAR;
		static int PRIOR;
		static int RETURN2;
		static int SEPARATOR;
		static int OUT;
		static int OPER;
		static int CLEAR_AGAIN;
		static int CRSEL;
		static int EXSEL;
		static int NUMPAD_00;
		static int NUMPAD_000;
		static int THOUSAND_SEPARATOR;
		static int DECIMAL_SEPARATOR;
		static int CURRENCY_UNIT;
		static int CURRENCY_SUBUNIT;
		static int NUMPAD_LEFT_PARENTHESIS;
		static int NUMPAD_RIGHT_PARENTHESIS;
		static int NUMPAD_LEFT_BRACE;
		static int NUMPAD_RIGHT_BRACE;
		static int NUMPAD_TAB;
		static int NUMPAD_BACKSPACE;
		static int NUMPAD_A;
		static int NUMPAD_B;
		static int NUMPAD_C;
		static int NUMPAD_D;
		static int NUMPAD_E;
		static int NUMPAD_F;
		static int NUMPAD_XOR;
		static int NUMPAD_POWER;
		static int NUMPAD_PERCENT;
		static int NUMPAD_LESS_THAN;
		static int NUMPAD_GREATER_THAN;
		static int NUMPAD_AMPERSAND;
		static int NUMPAD_DOUBLE_AMPERSAND;
		static int NUMPAD_VERTICAL_BAR;
		static int NUMPAD_DOUBLE_VERTICAL_BAR;
		static int NUMPAD_COLON;
		static int NUMPAD_HASH;
		static int NUMPAD_SPACE;
		static int NUMPAD_AT;
		static int NUMPAD_EXCLAMATION;
		static int NUMPAD_MEM_STORE;
		static int NUMPAD_MEM_RECALL;
		static int NUMPAD_MEM_CLEAR;
		static int NUMPAD_MEM_ADD;
		static int NUMPAD_MEM_SUBTRACT;
		static int NUMPAD_MEM_MULTIPLY;
		static int NUMPAD_MEM_DIVIDE;
		static int NUMPAD_PLUS_MINUS;
		static int NUMPAD_CLEAR;
		static int NUMPAD_CLEAR_ENTRY;
		static int NUMPAD_BINARY;
		static int NUMPAD_OCTAL;
		static int NUMPAD_DECIMAL;
		static int NUMPAD_HEXADECIMAL;
		static int LEFT_CTRL;
		static int LEFT_SHIFT;
		static int LEFT_ALT;
		static int LEFT_META;
		static int RIGHT_CTRL;
		static int RIGHT_SHIFT;
		static int RIGHT_ALT;
		static int RIGHT_META;
		static int MODE;
		static int AUDIO_NEXT;
		static int AUDIO_PREVIOUS;
		static int AUDIO_STOP;
		static int AUDIO_PLAY;
		static int AUDIO_MUTE;
		static int MEDIA_SELECT;
		static int WWW;
		static int MAIL;
		static int CALCULATOR;
		static int COMPUTER;
		static int APP_CONTROL_SEARCH;
		static int APP_CONTROL_HOME;
		static int APP_CONTROL_BACK;
		static int APP_CONTROL_FORWARD;
		static int APP_CONTROL_STOP;
		static int APP_CONTROL_REFRESH;
		static int APP_CONTROL_BOOKMARKS;
		static int BRIGHTNESS_DOWN;
		static int BRIGHTNESS_UP;
		static int DISPLAY_SWITCH;
		static int BACKLIGHT_TOGGLE;
		static int BACKLIGHT_DOWN;
		static int BACKLIGHT_UP;
		static int EJECT;
		static int SLEEP;
		static int fromScanCode(int scanCode);
		static ::Dynamic fromScanCode_dyn();

		static int toScanCode(int keyCode);
		static ::Dynamic toScanCode_dyn();

		static bool gt(int a,int b);
		static ::Dynamic gt_dyn();

		static bool gte(int a,int b);
		static ::Dynamic gte_dyn();

		static bool lt(int a,int b);
		static ::Dynamic lt_dyn();

		static bool lte(int a,int b);
		static ::Dynamic lte_dyn();

		static int plus(int a,int b);
		static ::Dynamic plus_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _KeyCode

#endif /* INCLUDED_lime_ui__KeyCode_KeyCode_Impl_ */ 

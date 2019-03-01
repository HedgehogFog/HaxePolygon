package entity.block;

import flixel.FlxSprite;
import flixel.FlxG;

import flixel.util.FlxColor;

class Border extends FlxSprite{

	public function new(){
        super();     
        // loadGraphic("assets/images/border.png", false);
        

        // FlxG.watch.add(this, "height", "h" + ID);

        immovable = true;        
        solid     = true;
    }

    public function init() {
        makeGraphic(Std.int(width), Std.int(height), FlxColor.WHITE);
    }
}
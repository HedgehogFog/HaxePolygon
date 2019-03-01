package entity;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Point extends FlxSprite {
    public function new(){
        super();

        makeGraphic(4, 4, FlxColor.WHITE);
    }
}
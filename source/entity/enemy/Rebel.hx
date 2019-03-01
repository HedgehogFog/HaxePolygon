package entity.enemy;

import flixel.FlxSprite;

class Rebel extends FlxSprite {
    public function new(){   
        super();     
        loadGraphic("assets/images/rebel.png");
		angularVelocity = 10;
        immovable = true;        
    }
}
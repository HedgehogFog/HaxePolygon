package;

import flixel.FlxGame;
import openfl.display.Sprite;

import state.PlayState;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(640, 480, PlayState));
	}
}
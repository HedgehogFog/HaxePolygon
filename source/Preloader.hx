package;

import flixel.system.FlxBasePreloader;

class Preloader extends FlxBasePreloader {	
	override public function new(MinDisplayTime:Float = 1, ?AllowedURLs:Array<String>):Void
	{
		super(MinDisplayTime, AllowedURLs);
	    onLoaded();

	}
	
}
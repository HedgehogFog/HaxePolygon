package state; 

import flixel.FlxState;
import flixel.FlxG;

import flixel.addons.util.FlxScene;
import flixel.group.FlxGroup;

import entity.Polygon;
import system.DataSystem;

class PlayState extends FlxState
{
	// var pointGroup:  FlxTypedGroup<Point>;
	var polygon: Polygon;

	override public function create():Void
	{
		super.create();
		
		// pointGroup = new FlxTypedGroup<Point>();
		// add(pointGroup);

		polygon = new Polygon();
		add(polygon);


		FlxG.camera.antialiasing = true;
		// FlxG.camera.follow(player, SCREEN_BY_SCREEN, 1);

	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (FlxG.keys.anyJustPressed([F5])){
            DataSystem.save(polygon.points, polygon.rotation, polygon.scaleSize);
        }
		if (FlxG.keys.anyJustPressed([F6])){
			var data = DataSystem.load();
			polygon.points = [];
			for(i in 0...data.points.length)
				polygon.points[i].set(data.points[i].x, data.points[i].y);
			polygon.rotation  = data.rotation;
			polygon.scaleSize = data.size; 
		}

		// FlxG.collide();
		// FlxG.collide(player, border);
	}

	// private function initBorder(border: Border){
		// border.init();
	// }
}

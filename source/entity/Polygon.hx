package entity;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.math.FlxVector;

using flixel.FlxSprite;
using flixel.util.FlxSpriteUtil;

class Polygon extends FlxSprite {

	public var points: Array<FlxVector>;

    var minX:Float = FlxG.width;
	var maxX:Float = 0.0;
	
	var minY:Float = FlxG.height;
	var maxY:Float = 0.0;

    public function new(){
        super();
        makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
        points = [];
        // points.push(new FlxVector(300, 1));
        // points.push(new FlxVector(100, 100));
        // points.push(new FlxVector(30, 130));

        FlxG.watch.add(this, "points");
        antialiasing = true;
    }
    public var rotation  = 0.0;
    public var scaleSize = 1.0; 

    public override function update(elapsed: Float){

        if (FlxG.mouse.justPressed)
             mouseDown(0, FlxG.mouse.x, FlxG.mouse.y);

        if (FlxG.mouse.pressedRight){
            minX = FlxG.width;
	        maxX = 0.0;
	
	        minY = FlxG.height;
	        maxY = 0.0;

            boundsFind();

			points.pop();
        }
        if (FlxG.keys.anyPressed([Q])){
            rotation += 1;
        }
        
        if (FlxG.keys.anyPressed([E])){
            rotation -= 1;
        }

        if (FlxG.keys.anyPressed([PLUS])){
            scaleSize += 0.1;
            boundsFind();
        }
        
        if (FlxG.keys.anyPressed([MINUS])){
            if (scaleSize - 0.1 > 0)
                scaleSize -= 0.1;
            boundsFind();        
        }

 
    }

    var locPoints: Array<FlxVector>;

    public override function draw(){
        FlxSpriteUtil.fill(this, FlxColor.BLACK);
        locPoints = getTransformedPoints();
        for (i in 0...locPoints.length - 1) {
            
            FlxSpriteUtil.drawLine(this, locPoints[i].x,     locPoints[i].y,
                                         locPoints[i + 1].x, locPoints[i + 1].y);
        }

		if (locPoints.length >= 2){
            // point.set(locPoints[0].x,     locPoints[0].y);
            // point2.set(points[points.length - 1].x,points[points.length - 1].y);

            // point  = rotation(point, degToRad(ang));
            // point2 = rotation(point2, degToRad(ang));

			FlxSpriteUtil.drawLine(this, locPoints[0].x, locPoints[0].y,
						                 locPoints[locPoints.length - 1].x, 
						                 locPoints[locPoints.length - 1].y);
		}
        
        super.draw();
    }

    var centroid: FlxVector;
	public function mouseDown(button:Int, x:Int, y:Int):Void {		
		if (button == 0){
            var locPoints = getTransformedPoints();
            rotation  = 0;
            scaleSize = 1;


            for(i in 0...locPoints.length){
                points[i] = locPoints[i];
            }	
            points.push(new FlxVector(x, y));
        
            boundsFind();
		}
	}

    private function getTransformedPoints(): Array<FlxVector> {
        var locPoints: Array<FlxVector> = [];

        
        var cos = Math.cos(degToRad(rotation));
        var sin = Math.sin(degToRad(rotation));

        for(i in 0...points.length){
            var x = points[i].x - centroid.x;
            var y = points[i].y - centroid.y;

            if (scaleSize > 0){
                x *= scaleSize;
                y *= scaleSize;
            }

            if (rotation != 0){
                var oldX = x;
                x = cos * x    - sin * y;
                y = sin * oldX + cos * y;
            }
            locPoints.push(new FlxVector(x + centroid.x, 
                                         y + centroid.y));
        }
        return locPoints;
    }
    // private function rotation(point: FlxVector, angle: Float): FlxVector {	
	// 	point.x = centroid.x + (point.x - centroid.x) * Math.cos(angle) - (point.y - centroid.y) * Math.sin(angle);
	// 	point.y = centroid.y + (point.x - centroid.x) * Math.sin(angle) + (point.y - centroid.y) * Math.cos(angle);
		
    //     return point;
	// }

    // private function rotation(index: Int, centroid: FlxVector, angle: Float){	
		// points[index].x = centroid.x + (points[index].x - centroid.x) * Math.cos(angle) - (points[index].y - centroid.y) * Math.sin(angle);
		// points[index].y = centroid.y + (points[index].x - centroid.x) * Math.sin(angle) + (points[index].y - centroid.y) * Math.cos(angle);
	// }

    private function boundsFind(){
		for(point in points){
			if (point.x < minX)
				minX = point.x;
			
			if (point.x > maxX)
				maxX = point.x;

			if (point.y < minY)
				minY = point.y;
			
			if (point.y > maxY)
				maxY = point.y;
		}
		centroid = new FlxVector((minX + maxX)/2, (minY + maxY) / 2);
        
	}

    public function degToRad(degrees:Float):Float {
		return degrees * Math.PI / 180;
	}
}
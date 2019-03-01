package system;

import flixel.math.FlxPoint;
import sys.io.File;
import haxe.Json;
import haxe.Unserializer;

import entity.Polygon;

typedef SaveData = {
    points:   Array<FlxPoint>,
    rotation: Float,
    size:     Float
};

class DataSystem {
    public static function save(points: Array<FlxPoint>, rotation: Float, size: Float){
        // var builder = new StringBuilder();
        // builder.add(points.length).newLine();
        // for (point in points)
        //     builder.add(point.x + " " + point.y).newLine();
        
        // builder.add(rotation).newLine();
        // builder.add(size);
        // var content = builder.toString();
        // File.saveContent("data.vll", "Penis");
        var fout = File.write("data.vll", true);  
        try{
            fout.writeFloat(points.length);
            for (point in points){
                fout.writeFloat(point.x);
                fout.writeFloat(point.y);
            }        
            fout.writeFloat(rotation);
            fout.writeFloat(size);        
        } catch(ex: Dynamic){
            trace(ex);
        }
    } 

    public static function load(): SaveData {
        trace(File.getContent("data.vll"));        
        var fin = File.read("data.vll", false);        
        var data: SaveData = {
            points: new Array<FlxPoint>(),
            rotation: 0,
            size:     0
        };

        try{
            var length = fin.readUInt16();
            for(i in 0...length){
                var x = fin.readFloat();
                var y = fin.readFloat();
                data.points.push(new FlxPoint(x, y));
            }
            data.rotation = fin.readFloat();
            data.size     = fin.readFloat();

        }catch(ex: haxe.io.Eof){
            trace(ex);
        }
        fin.close();

        return data;
    }
}
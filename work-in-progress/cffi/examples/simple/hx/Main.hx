import cpp.Lib;

class Main
{
    public var ForeignFunction:Dynamic;
    public function new()
    {
      trace("Hello from Main, about to load libforeign library");
      try {
        ForeignFunction = cpp.Lib.load("libforeign", "CPP_ForeignFunction",1);
      } catch (e:Dynamic) {
        trace("Failed to load libforeign.ndll!");
        return;
      }

      var a:Int = ForeignFunction(2);
      trace("Main called ForeignFunction(2), returned "+a);
    }

    public static function main() { new Main(); }
}

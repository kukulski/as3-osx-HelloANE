package
{
	import flash.display.Sprite;
	
	import xd.HelloANE.Hello;
	
	public class TestHelloANE extends Sprite
	{
		public function TestHelloANE()
		{
			var hello:Hello = new Hello;
			trace(hello.message);
		}
	}
}
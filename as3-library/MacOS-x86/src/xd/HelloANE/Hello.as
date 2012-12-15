package xd.HelloANE
{
	import flash.external.ExtensionContext;
	
	public class Hello
	{
		private var   _ExtensionContext:ExtensionContext;
	
		public function Hello()
		{	
			trace("[HELLO] Initalizing ANE...");
			try
			{
				_ExtensionContext = ExtensionContext.createExtensionContext("xd.HelloANE", null);
			}
			catch (e:Error)
			{
				trace(e.toString());
				trace("[HELLO] ANE Not loaded properly.  Future calls will fail.");
			}
		}
		public function get message():String {
			return _ExtensionContext.call("hello") as String;
		}

	}
}
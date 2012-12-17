#as3-osx-HelloANE
================

trivial "hello world" air native extension for OSX.


##key bits (in the order to build them)
* as3-library/MaxOS-x86 -- the flashbuilder project for the wrapper.swc
* MacOS-x86/HelloANE.xcodeproj  -- the thing that builds HelloANE.framework. it cheats a little in that it manually includes the required FlashRuntimeExtensions.h.
* * the XCODE project calls the "build.command" script to rebuild the ANE on "Build for Archiving" 
* TestHelloANE -- trivial test app that traces the result of the call to the native extension
* do a "Clean…" rebuild in Flash Builder 4.7 to pick up changes to your native code
* (to pick up changes to the as3-side of your native extension you still have to quit flash builder as far as I can tell)

## to use the Native Extension 
* add the ANE to your project via the Native Extensions sub-tab of the project "Build Path" properties
* check the "Package" checkbox in the Native Extensions sub-tab of the project "Build Packaging" properties
* (and, yes, you can just reference the ANE from the place that the )

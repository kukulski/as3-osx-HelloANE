#as3-osx-HelloANE
================

trivial "hello world" air native extension for OSX.


##key bits (in the order to build them)
* MacOS-x86/HelloANE.xcodeproj  -- the thing that builds HelloANE.framework. it cheats a little in that it manually includes the required FlashRuntimeExtensions.h.
* as3-library/MaxOS-x86 -- the flashbuilder project for the wrapper.swc
* build.command -- creates HelloANE.ane from the results of the two previous steps
* TestHelloANE -- trivial test app that traces the result of the call to the native extension


## Wish list
* bonus points to whoever can figure out the minimal steps to take to get FB to pick up the latest build of the ANE

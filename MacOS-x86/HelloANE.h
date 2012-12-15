#define EXPORT __attribute__((visibility("default")))

#ifndef HelloANE_H_
#define HelloANE_H_
#include "FlashRuntimeExtensions.h" // should be included via the framework, but it's not picking up
EXPORT
void HelloANEinitializer(void** extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer);

EXPORT
void HelloANEfinalizer(void* extData);

#endif /* HelloANE_H_ */

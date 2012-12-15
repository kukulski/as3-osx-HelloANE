

#include "HelloANE.h"
#include <stdlib.h>

typedef char bool;

FREObject HELLO_hello(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[])
{
    FREObject retVal;
	FRENewObjectFromUTF8(5, (const uint8_t *)"hello",&retVal);
    return retVal;
}


void reg(FRENamedFunction *store, int slot, const char *name, FREFunction fn) {
    store[slot].name = (const uint8_t*)name;
    store[slot].functionData = NULL;
    store[slot].function = fn;
}

void contextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctions, const FRENamedFunction** functions)
{
  *numFunctions = 1;
  FRENamedFunction* func = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));
  *functions = func;
  reg(func,0,"hello",HELLO_hello);
}


    


void contextFinalizer(FREContext ctx)
{
   return;
}

void HelloANEinitializer(void** extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer)
{

  *ctxInitializer = &contextInitializer;
  *ctxFinalizer = &contextFinalizer;
 *extData = NULL;

}

void HelloANEfinalizer(void* extData)
{
	FREContext nullCTX;
	nullCTX = 0;

	contextFinalizer(nullCTX);
	return;
}


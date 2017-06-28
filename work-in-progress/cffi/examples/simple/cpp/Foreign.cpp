#define IMPLEMENT_API
#include <hx/CFFI.h>

extern "C"
{

  value CPP_ForeignFunction(value haxeVal)
  {
    int intVal = val_int(haxeVal);
    printf("CPP: intVal = %d\n",intVal);
    intVal++;
    value returnVal = alloc_int(intVal);
    return returnVal;
  }
  DEFINE_PRIM(CPP_ForeignFunction, 1);

}

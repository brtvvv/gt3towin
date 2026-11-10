#include "../lib/ginclude/stdarg.h"
extern "C" void func_002884E0();
extern void *D_00309840[];
extern "C" void func_002887C0(int, va_list);
extern "C" void func_00288DC0(int a, ...) { void *o = D_00309840[0]; D_00309840[0] = (void *)func_002884E0; va_list ap; va_start(ap, a); func_002887C0(a, ap); D_00309840[0] = o; }


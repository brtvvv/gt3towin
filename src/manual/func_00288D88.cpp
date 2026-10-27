#include "../lib/ginclude/stdarg.h"
extern "C" int func_002887C0(void *, va_list);
extern "C" int func_00288D88(void *a, ...) { va_list ap; va_start(ap, a); return func_002887C0(a, ap); }


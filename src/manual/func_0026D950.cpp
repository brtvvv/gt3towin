#include "../lib/ginclude/stdarg.h"
extern "C" int func_0026DA10(void *, const char *, va_list);
extern "C" int func_0026D950(void *a, const char *fmt, ...) { va_list ap; va_start(ap, fmt); return func_0026DA10(a, fmt, ap); }


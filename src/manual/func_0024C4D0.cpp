#include "../lib/ginclude/stdarg.h"
extern "C" int func_0024C508(void *, const char *, va_list);
extern "C" int func_0024C4D0(void *a, const char *fmt, ...) { va_list ap; va_start(ap, fmt); return func_0024C508(a, fmt, ap); }


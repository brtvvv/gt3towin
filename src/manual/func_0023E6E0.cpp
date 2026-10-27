#include "../lib/ginclude/stdarg.h"
extern "C" int func_0023E718(void *, const char *, va_list);
extern "C" int func_0023E6E0(void *a, const char *fmt, ...) { va_list ap; va_start(ap, fmt); return func_0023E718(a, fmt, ap); }


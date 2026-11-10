#include "/home/brtvvv/gt3towin/src/lib/ginclude/stdarg.h"
extern "C" int func_0026DA10(char *, const char *, va_list);
extern "C" void func_00253458(int);
extern char *D_003540C0;
extern "C" void func_001D35C0(const char *fmt, ...) { char buf[0x410]; va_list ap; va_start(ap, fmt); func_0026DA10(buf, fmt, ap); D_003540C0 = buf; func_00253458(10); }


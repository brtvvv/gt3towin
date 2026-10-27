struct R { char p[0x24]; float f; }; extern "C" R *func_0014CAF8(void *, char *); extern "C" int func_0026D950(char *, const char *, int); extern char D_00353188[];
extern "C" void func_0014C6E8(void *a, char *buf) { R *r = func_0014CAF8(a, buf); if (r) func_0026D950(buf, D_00353188, (int)r->f); }


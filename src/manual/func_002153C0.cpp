extern "C" int func_0026ACA0(const char *), func_0027FC78(const char *, const char *);
extern "C" void func_0027FDBC(char *, const char *);
extern "C" int func_002153C0(char *a, char *b) { int la = func_0026ACA0(a); int lb = func_0026ACA0(b); char x[0x40], y[0x40]; func_0027FDBC(x, a); func_0027FDBC(y, b); x[la - 4] = 0; y[lb - 4] = 0; return func_0027FC78(x, y) == 0; }

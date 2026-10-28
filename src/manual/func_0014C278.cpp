struct X { char p[0x1C]; float f; };
extern char D_0031E540[];
extern "C" X *func_0014C9B8(int, char *);
extern "C" void func_0026D950(char *, const char *, int, int);
extern "C" void func_0014C278(int a, char *out) { X *x = func_0014C9B8(a, out); if (!x) return; int v = (int)(x->f * 10.0f); func_0026D950(out, D_0031E540, v / 10, v % 10); }


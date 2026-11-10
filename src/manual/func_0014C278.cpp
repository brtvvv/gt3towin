struct R { char p[0x1C]; float x1C; };
extern char D_0031E540[];
extern "C" R *func_0014C9B8(int); extern "C" void func_0026D950(int, char *, int, int);
extern "C" void func_0014C278(int a, int b) { R *r = func_0014C9B8(a); if (!r) return; int v = (int)(r->x1C * 10.0f); func_0026D950(b, D_0031E540, v / 10, v % 10); }


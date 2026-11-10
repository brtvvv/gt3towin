struct A { int a[11]; };
extern A D_00335AF8; extern char D_002F49E0[];
extern "C" void func_002428C8(int, char *, int, int, char *);
extern "C" void func_001BC1E8(char *t) { A l = D_00335AF8; int *p = l.a; for (int i = 10; i >= 0; i--) { func_002428C8(*p, t, 0, 1, D_002F49E0); p++; t += 0x140; } }


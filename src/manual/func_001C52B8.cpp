struct S8 { int a, b; }; struct R { char p[0xC]; int xC; };
extern S8 D_00354730;
extern "C" int func_001C5290(int); extern "C" int func_001C5230(int); extern "C" int func_0023A2A8(S8 *, int, int); extern "C" R *func_0023A220(S8 *, int);
extern "C" void func_001C52B8(int a, int *out, int f) { int n = func_001C5290(a); for (int i = 0; i < n; i++) { int x = func_0023A2A8(&D_00354730, func_001C5230(a), i); *out++ = func_0023A220(&D_00354730, x)->xC | f; } }


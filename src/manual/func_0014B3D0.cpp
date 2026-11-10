struct T { char p[0x306B4]; int r; char q[0x30728 - 0x306B8]; int x; };
extern "C" void func_0014A0A8(T *); extern "C" void func_0014A0F0(T *, int, int, int, int, int, int); extern "C" void func_0014AC80(T *, int); extern "C" void func_0014AAB0(T *, int); extern "C" void func_0014A7F8(T *, int); extern "C" void func_0014A778(T *); extern "C" void func_0014A0D0(T *);
extern "C" int func_0014B3D0(T *t, int k, int a, int b, int c, int d, int e, int x) { func_0014A0A8(t); func_0014A0F0(t, k, a, b, c, d, e); t->x = x;
 switch (k) { case 27: func_0014AC80(t, k); break; case 25: case 26: case 28: case 29: func_0014AAB0(t, k); break; default: func_0014A7F8(t, k); break; }
 func_0014A778(t); func_0014A0D0(t); return t->r; }


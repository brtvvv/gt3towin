struct X { char p[8]; union { int i; float f; } u; char q[0x48]; int k; };
extern "C" X *func_0014CAF8(int);
extern "C" void func_0023CA88(void *, float), func_0023C9B0(void *, int);
extern "C" void func_0014C510(int a, void *b) { X *x = func_0014CAF8(a); if (!x) return; if (x->k == 0x11) func_0023CA88(b, x->u.f); else func_0023C9B0(b, x->u.i); }


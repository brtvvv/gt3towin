struct T { void *vt; };
extern char D_0032AB20[];
extern "C" void func_001A40A8(char *, int), func_001A3A28(char *, int), func_00182E30(T *, int), func_00183410(T *, int);
extern "C" void func_001835C0(T *t, int c) { t->vt = D_0032AB20; func_001A40A8((char *)t + 0x34830, 2); func_001A3A28((char *)t + 0x34584, 2); func_00182E30(t, 0); if (c & 1) func_00183410(t, 0x34D80); }

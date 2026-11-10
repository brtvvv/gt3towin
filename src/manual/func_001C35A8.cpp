struct T { char p[8]; int x8; char q[0x40]; int x4C; };
extern "C" int func_001C34A0(T *, int); extern "C" int func_001C3570(int, int);
extern "C" int func_001C35A8(T *t, int a, int b) { if (!t->x8) return 0; int v; if (b) v = func_001C34A0(t, b); else v = t->x4C; if (!v) return 0; return func_001C3570(a, v); }


struct T { char p[0x18]; char *x18; };
extern "C" int func_0017A080(char *, int, int *, int); extern "C" void func_00194380(T *, int, int); extern "C" void func_0017A100(char *, int, int, int);
extern "C" void func_001942D8(T *t) { char *m = t->x18 + 0x84; int st[4]; if (!func_0017A080(m, 0x15, st, 1)) return; int v = st[0]; if ((v & 0xFF) == *((signed char *)t + 0xA468)) { func_00194380(t, (v >> 8) & 0xFF, (v >> 16) & 0xFF); return; } func_0017A100(m, 0x15, v, 0); }


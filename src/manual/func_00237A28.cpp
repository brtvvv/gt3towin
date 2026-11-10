struct R { char p[0x28]; unsigned char x28; };
struct T { char p[0xF0]; int xF0[8]; char q[0x114 - 0x110]; int x114; };
extern "C" R *func_002359F8(T *); extern "C" void func_00233638(T *, char *); extern "C" void func_001E37D8(char *, int, short *, int);
extern "C" void func_00237A28(T *t) { if (!func_002359F8(t)->x28) return; short st[8]; char b[0x3F0]; func_00233638(t, b); func_001E37D8(b, t->x114 * 10, st, 1); for (int i = 0; i < 8; i++) t->xF0[i] = st[i]; }


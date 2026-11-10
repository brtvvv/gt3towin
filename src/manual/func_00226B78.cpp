struct T { char p[0x16]; unsigned short x16; char q[0x2C - 0x18]; int **x2C; };
extern "C" void func_00249FD0(int *, int);
extern "C" void func_00226B78(T *t, int b) { if (!t) return; if (!t->x2C) return; for (int i = 0; i < t->x16; i++) if (t->x2C[i]) func_00249FD0(t->x2C[i], b); }


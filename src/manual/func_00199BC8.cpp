struct T { char p[0x14]; void *x14; int x18; unsigned x1C[4]; char x2C[4]; };
extern char D_00330360[];
extern "C" void func_00197398(T *);
extern "C" T *func_00199BC8(T *t) { func_00197398(t); t->x18 = 0; t->x14 = D_00330360; for (int i = 0; i < 4; i++) { t->x1C[i] = 0x80202020; t->x2C[i] = 0; } return t; }


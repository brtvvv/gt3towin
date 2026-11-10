struct E { char d[0x40]; }; struct T { int x0, x4, x8, xC; E e[1]; };
extern "C" void func_002431F8(E *, T *);
extern "C" void func_00243230(T *t) { t->xC = t->xC + (int)t; for (int i = 0; i < t->x8; i++) func_002431F8(&t->e[i], t); }


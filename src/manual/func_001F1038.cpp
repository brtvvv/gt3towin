struct X { char p[0xC]; int xC; };
struct T { X *x0; };
extern "C" int func_001F3E90(T *); extern "C" int func_001DB148(int, int);
extern "C" int func_001F1038(T *t, int a) { if (func_001F3E90(t) == 2) return 0; return func_001DB148(a, t->x0->xC ? 2 : 0); }


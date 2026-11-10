struct V { char p[0x18]; short d; short pad; void (*f)(void *); };
struct O { char p[8]; O *x8; char q[0xC0 - 0xC]; V *v; };
struct E { char d[0xD0]; };
struct T { O *x0; char p[0x2EC - 4]; E e[8]; };
extern "C" int func_0022E8B0(); extern "C" int func_0022F560(E *); extern "C" void func_0022F5B8(E *);
extern "C" int func_0022FA48(T *t) { int r = 0; if (func_0022E8B0() >= 0) r = func_0022F560(&t->e[func_0022E8B0()]); if (!r) return 0; E *e = t->e; for (int i = 7; i >= 0; i--) { func_0022F5B8(e); e++; } for (O *o = t->x0; o; o = o->x8) o->v->f((char *)o + o->v->d); return 1; }


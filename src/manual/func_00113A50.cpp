struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
struct M { int x0, x4; };
struct T { char p[0x288]; V *v; char q[0x2E4 - 0x28C]; M m; };
extern char D_002CF1D0[], D_0030ED58[];
extern "C" void func_001CE410(char *, int); extern "C" void func_001B75E8(M *, char *, int); extern "C" void func_001B8170(M *, int); extern "C" void func_00105018(T *); extern "C" unsigned char func_001B8B10(M *); extern "C" void func_00105048(T *); extern "C" void func_001B88C0(M *); extern "C" int func_00253458(int);
extern "C" int func_00113A50(T *t) { func_001CE410(D_002CF1D0, 1); M *m = &t->m; func_001B75E8(m, D_0030ED58, 0); func_001B8170(m, 0); func_00105018(t); while (!t->m.x0) { func_001B8B10(m); t->v->f((char *)t + t->v->d); } func_00105048(t); func_001B88C0(m); func_00253458(2); int r = m->x4; func_001CE410(D_002CF1D0, 0); return r; }


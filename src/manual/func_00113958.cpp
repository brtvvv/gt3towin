struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
struct M { int x0, x4; };
struct T { char p[0x288]; V *v; char q[0x2E4 - 0x28C]; M m; };
extern char D_002CF1D0[], D_00293BD0[], D_0030ED48[];
extern "C" char *func_00219680(); extern "C" void func_001CE310(char *, char *); extern "C" void func_001B75E8(M *, char *, int); extern "C" void func_001B8170(M *, int); extern "C" void func_001B88F8(M *, int); extern "C" void func_00105018(T *); extern "C" unsigned char func_001B8B10(M *); extern "C" void func_00105048(T *); extern "C" void func_001B88C0(M *); extern "C" int func_00253458(int); extern "C" int func_001B8930(M *);
extern "C" int func_00113958(T *t) { func_001CE310(D_002CF1D0, D_00293BD0); M *m = &t->m; func_001B75E8(m, D_0030ED48, 0); func_001B8170(m, 0); func_001B88F8(m, *(int *)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x5E0)); func_00105018(t); while (!t->m.x0) { func_001B8B10(m); t->v->f((char *)t + t->v->d); } func_00105048(t); func_001B88C0(m); func_00253458(2); int *g = (int *)(func_00219680() + 0x307C8); g[0x5E0 / 4] = func_001B8930(m); return m->x4; }


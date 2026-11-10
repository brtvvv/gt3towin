struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
extern "C" void func_001B75E8(int *, char *, int); extern "C" int func_001B8170(int *, int); extern "C" unsigned char func_001B8B10(int *); extern "C" void func_001B79F8(int *, int); extern "C" char *func_00219680();
struct T { char p[0x288]; V *v; char q[0x2E4 - 0x28C]; int m; };
extern char D_00353298[], D_00322388[];
extern "C" void func_0023C140(char *, int);
extern "C" void func_0015D698(T *t, int f) { int g = *(int *)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x540); if (g) func_0023C140((char *)t + 0xE40, g); int *m = &t->m; func_001B75E8(m, D_00353298, 0); func_001B8170(m, 0); if (f) { func_001B79F8(m, 0); func_001B75E8(m, D_00322388, 0); func_001B8170(m, 0); } while (!t->m) { func_001B8B10(m); t->v->f((char *)t + t->v->d); } }


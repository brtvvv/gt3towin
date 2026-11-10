struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
extern "C" void func_001D3700(int, int, int); extern "C" void func_001B8AD8(int *, int); extern "C" void func_001B75E8(int *, int, int); extern "C" int func_001B8170(int *, int); extern "C" int func_00253458(int); extern "C" unsigned char func_001B8B10(int *); extern "C" void func_001B8610(int *); extern "C" void func_001B79F8(int *, int); extern "C" void func_00212A08(int); extern "C" void func_00101A58(int); extern "C" void func_0022CA98(); extern "C" int func_00129988(char *); extern "C" void func_00135110(void *);
struct T { char p[0x288]; V *v; int m; };
extern char D_00318E38[];
extern "C" void func_00138138(T *t) { func_001D3700(0x17, 0, 1); int *m = &t->m; t->v->f((char *)t + t->v->d); func_001B8AD8(m, 1); func_001B75E8(m, (int)D_00318E38, 0); func_001B8170(m, 0); while (!t->m) { if (func_00129988((char *)t + 0xEF8)) func_001B8AD8(m, 0); func_001B8B10(m); t->v->f((char *)t + t->v->d); } func_001B8610(m); }


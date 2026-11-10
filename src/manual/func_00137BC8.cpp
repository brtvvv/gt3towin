struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
struct T { char p[0x288]; V *v; int x28C; };
extern char D_003189D8[];
extern "C" void func_001D3700(int, int, int); extern "C" void func_001B8AD8(int *, int); extern "C" void func_001B75E8(int *, char *, int); extern "C" void func_001B8170(int *, int); extern "C" int func_00253458(int); extern "C" unsigned char func_001B8B10(int *); extern "C" void func_001B8610(int *);
extern "C" void func_00137BC8(T *t) { func_001D3700(0x17, 0, 1); int *m = &t->x28C; t->v->f((char *)t + t->v->d); func_001B75E8(m, D_003189D8, 0); func_001B8AD8(m, 1); func_001B8170(m, 0); func_00253458(0x96); func_001B8AD8(m, 0); while (!t->x28C) { func_001B8B10(m); t->v->f((char *)t + t->v->d); } func_001B8610(m); }


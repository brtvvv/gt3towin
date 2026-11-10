struct E { char p[0x1E8]; int x1E8; char q[0x1F8 - 0x1EC]; };
struct T { char p[0x248]; char x248[0x20]; char x268[0x20]; int x288, x28C; char r[8]; E e[8]; };
extern "C" char *func_00219680(); extern "C" void func_00218E08(char *, char *); extern "C" void func_00216FA0(int *, char *); extern "C" void func_00216FC0(int *, char *); extern "C" void func_00216FE0(int *, char *); extern "C" void func_00217000(int *, int); extern "C" void func_00217008(int *, int); extern "C" void func_00217010(int *, E *, int); extern "C" void func_00217038(int *, int, int);
extern "C" void func_0018FA78(T *t) { char buf[0x40]; int *g = (int *)(func_00219680() + 0x2EF28); *g = 1; func_00218E08(func_00219680() + 0x307C8, buf); func_00216FA0(g, buf); func_00216FC0(g, t->x248); func_00216FE0(g, t->x268); func_00217000(g, t->x288); func_00217008(g, t->x28C); for (int i = 0; i < 8; i++) { func_00217010(g, &t->e[i], i); func_00217038(g, t->e[i].x1E8, i); } }


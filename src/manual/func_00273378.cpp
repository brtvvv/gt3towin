struct E { char p[0x10]; int x10; char q[8]; };
struct R { E e[4]; };
extern R D_004AD290[];
extern "C" char *func_002732C8(int, int); extern "C" void func_0027EBC8(char *, char *, int);
extern "C" int func_00273378(int a, int b, char *d) { if (!D_004AD290[a].e[b].x10) return 0; char *p = func_002732C8(a, b); func_0027EBC8(d, p, *(int *)(p + 0x60)); return *(int *)(p + 0x60); }


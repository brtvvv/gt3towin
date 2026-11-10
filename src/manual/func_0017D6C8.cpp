struct L { unsigned n; int x4; char **e; };
struct Q { char p[0x20]; long x20; };
struct S { char p[0x18]; L *x18; char q[0x28 - 0x1C]; Q *x28; };
struct T { int x0; S *x4; };
extern "C" int func_00239A20(Q *, long); extern "C" int func_00237818(char *); extern "C" void func_00237680(char *); extern "C" int func_00237758(char *); extern "C" void func_00235628(char *);
extern "C" void func_0017D6C8(T *t) { S *s = t->x4; switch (func_00239A20(s->x28, s->x28->x20)) { case 1: for (unsigned i = 0; i < s->x18->n; i++) { func_00237818(s->x18->e[i] + 0x20); func_00237680(s->x18->e[i] + 0x20); } break; case 2: for (unsigned i = 0; i < s->x18->n; i++) { func_00237758(s->x18->e[i] + 0x20); func_00235628(s->x18->e[i] + 0x20); } break; } }


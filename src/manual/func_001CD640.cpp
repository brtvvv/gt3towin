struct E { int x0; char name[28]; };
struct T { char *x0; int x4; E *x8; };
extern "C" int func_0027FC78(char *, char *); extern "C" void func_001CD548(int, char *);
extern "C" int func_001CD640(T *t, int a, char *name) { for (int i = 0; i < t->x4; i++) { if (!func_0027FC78(t->x8[i].name, name)) { func_001CD548(a, t->x0 + t->x8[i].x0); return 1; } } return 0; }


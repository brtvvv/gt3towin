struct O { char p[0x4F0]; };
struct T { char *x0; int x4; int x8; O xC[1]; };
extern "C" void func_001FC020(O *, O *, int);
extern "C" void func_001FB7B8(T *t) { int n = *(int *)(t->x0 + 0xE384); t->x4 = n; for (int i = 0; i < t->x4; i++) func_001FC020(&t->xC[i], t->xC, t->x4); }


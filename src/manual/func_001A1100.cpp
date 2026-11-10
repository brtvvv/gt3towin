extern int D_00353B14;
struct T { char p[0x10]; char x10[0x24]; char x34[0x12]; short x46; };
extern "C" void func_00190B38(int, char *, int *, int *, char *);
extern "C" int func_001A1100(T *t) { int s[2]; s[0] = t->x46; func_00190B38(D_00353B14, t->x10, &s[0], &s[1], t->x34); t->x46 = s[0]; return s[0] >= 0; }


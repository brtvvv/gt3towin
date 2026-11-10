struct C { char p[0x13B0]; float x13B0; };
struct T { char p[4]; char m[0x6A8]; C *x6AC; };
extern "C" void func_0021FE78(char *, int); extern "C" float func_001EC8E0(C *, int, float); extern "C" void func_0021FEC8(char *, int, float); extern "C" float func_001EC618(C *); extern "C" void func_0021FEF0(char *, float); extern "C" float func_001EC930(C *, float); extern "C" void func_0021FEE8(char *, float);
extern "C" void func_001ABFF8(T *t) { C *c = t->x6AC; char *m = t->m; func_0021FE78(m, 0.0f < c->x13B0); for (int i = 0; i < 4; i++) func_0021FEC8(m, i, func_001EC8E0(c, i, 0.0f)); func_0021FEF0(m, func_001EC618(c)); func_0021FEE8(m, func_001EC930(c, 0.0f)); }


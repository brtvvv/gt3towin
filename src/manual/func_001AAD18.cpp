struct EB { char p[0x90]; virtual void f0(int); };
struct E : EB { char q[0x18C - 0x90 - 4]; };
extern char D_00332498[]; extern "C" void func_001AAE78(char *); extern "C" void func_0021FC40(char *, int); extern "C" void func_001AAB80(char *, int);
extern "C" void func_001AAD18(char *t, int f) { *(char **)(t + 0x6BC) = D_00332498; func_001AAE78(t); E *b = (E *)(t + 0x3C); if (b) { E *e = b + 4; while (b != e) { e--; e->f0(0); } } func_0021FC40(t + 4, 2); if (f & 1) func_001AAB80(t, 0x6C0); }


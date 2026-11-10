struct EB { char p[0x368]; virtual void f0(int); };
struct E : EB { char q[0x36C - 0x368 - 4]; };
extern char D_0031AC28[]; extern "C" void func_0020FDB8(char *, int); extern "C" void func_001BAB98(char *, int); extern "C" void func_001C0360(char *);
extern "C" void func_0013EBC8(char *t, int f) { *(char **)(t + 0x1C) = D_0031AC28; func_0020FDB8(t + 0xED4, 2); E *b = (E *)(t + 0x11C); if (b) { E *e = b + 4; while (b != e) { e--; e->f0(0); } } func_001BAB98(t, 0); if (f & 1) func_001C0360(t); }


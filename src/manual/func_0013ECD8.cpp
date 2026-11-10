struct EB { char p[0x90]; virtual void f0(int); };
struct E : EB { char q[0xC8 - 0x90 - 4]; };
extern char D_0031AC70[]; extern "C" void func_0021FC40(char *, int); extern "C" void func_0027D2F8(char *);
extern "C" void func_0013ECD8(char *t, int f) { *(char **)(t + 0x368) = D_0031AC70; E *b = (E *)(t + 0x40); if (b) { E *e = b + 4; while (b != e) { e--; e->f0(0); } } func_0021FC40(t + 8, 2); if (f & 1) func_0027D2F8(t); }


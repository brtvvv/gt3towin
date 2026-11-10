struct EB { char p[0x1C]; virtual void f0(int); };
struct E : EB { char q[0x100 - 0x20]; };
extern "C" void func_001BAB98(char *, int); extern "C" void func_001C0360(char *);
extern "C" void func_0014ECD0(char *t, int f) { E *b = (E *)(t + 0x10C); if (b) { E *e = b + 14; while (b != e) { e--; e->f0(0); } } func_001BAB98(t, 0); if (f & 1) func_001C0360(t); }


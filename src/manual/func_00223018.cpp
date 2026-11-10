struct EB { char p[0x2C]; virtual void f0(int); };
struct E : EB { char q[0x4C - 0x30]; };
extern char D_00342888[];
extern "C" void func_00220730(char *, int);
extern "C" void func_00223018(char *t, int a) { *(char **)(t + 0x90) = D_00342888; E *b = (E *)(t + 0x94); if (b) { E *e = b + 3; while (b != e) { e--; e->f0(0); } } func_00220730(t, a); }


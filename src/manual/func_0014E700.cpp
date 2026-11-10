struct EB { char p[0x1C]; virtual void f0(int); };
struct E : EB { char q[0xE0]; };
struct O { int x0, x4; virtual void d(int); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(int); };
extern char D_0031ED30[];
extern "C" void func_001BAB98(char *, int); extern "C" void func_001C0360(char *);
extern "C" void func_0014E700(char *t, int f) { *(char **)(t + 0x1C) = D_0031ED30; O *o = *(O **)(t + 0xF24); if (o && *(int *)(t + 0xF28)) { o->m13(1); o = *(O **)(t + 0xF24); if (o) o->d(3); } E *b = (E *)(t + 0x104); if (b) { E *e = b + 14; while (b != e) { e--; e->f0(0); } } func_001BAB98(t, 0); if (f & 1) func_001C0360(t); }


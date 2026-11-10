struct EB { char p[0xC0]; virtual void f0(); virtual void f1(); virtual void f2();  virtual int f3(); };
struct E : EB { char q[0x14C - 0xC4]; };
extern char D_002E1110[];
extern "C" void *func_001861F0(char *t, int a) { if (a >= 0x100) { E *e = (E *)(t + ((a - 0x100) * 0x14C + 0x1ADB8)); if (e->f3()) return e; } return D_002E1110; }


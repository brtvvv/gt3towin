// @flags -fexceptions
struct X { char p[0x7C]; int x7C; char q[0x8C0 - 0x80]; virtual void d(int); };
struct A { char d[0x30]; A(); ~A(); void set(int); };
struct B { char d[0x50]; int x50; char e[0x270 - 0x54]; B(); ~B(); X *get(); };
struct C { int x0; X *x4; char d[0x34D80 - 8]; C(); ~C(); };
extern "C" char *func_00219680(); extern "C" int func_00232210(char *); extern "C" void func_00102C40(int, int); extern "C" void func_0017A688(B *, int); extern "C" void func_0017DE20(C *, int, int); extern "C" void func_00102CA0();
extern "C" void func_00100618() { char *s = func_00219680() + 0x3080C; { A a; a.set(func_00232210(s)); } func_00102C40(0x20000, 2); { B b; func_0017A688(&b, func_00232210(s)); b.x50 = 0; X *x = b.get(); x->x7C = 1; { C c; c.x4 = x; func_0017DE20(&c, 2, 1); if (x) x->d(3); func_00102CA0(); } } }


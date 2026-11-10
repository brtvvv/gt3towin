extern unsigned char D_00343068[];
struct B { char p[0x2C]; int x2C; int x30; char q[0x3C - 0x34]; unsigned char x3C; char r[0xC0 - 0x3D]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual int get(); }; struct T : B { float xC4; };
extern "C" void func_0022ED68(T *); extern "C" void func_001BB978(T *);
extern "C" void func_001BBE20(T *t) { func_0022ED68(t); int v = t->get() & 0xFF; int f = t->x30; if (f & 0x10) v |= 0x200; if (f & 0x20) v |= 0x400; if (f & 0x40) v |= 0x800; if (f & 0x80) v |= 0x1000; if (f & 0x4) v |= 0x2000; if (f & 0x1) v |= 0x4000; if (f & 0x200) v |= 0x8000; if (f & 0x8) v |= 0x10000; if (f & 0x2) v |= 0x20000; if (f & 0x400) v |= 0x40000; t->x2C = v; t->xC4 = (D_00343068[t->x3C] - 0x80) * 0.0078125f; func_001BB978(t); }


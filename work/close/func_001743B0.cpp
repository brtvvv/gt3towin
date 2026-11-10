struct S { int a; char p[0xFC]; char name[0x4C]; };
struct Y { char p[0x290]; int x290; };
struct SB { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual SB *f8(); };
struct U : SB { char q[0x118 - 0x20]; S *x118; char r[0x164 - 0x11C]; int x164; };
struct T : SB { char q[0x12C - 0x20]; Y *x12C; };
extern S D_0049DAE0[];
extern "C" void func_0027FDBC(char *, char *); extern "C" void func_001C5E88(int); extern "C" void func_001CB058(T *, S *, int);
extern "C" void func_001743B0(T *t, char *s) { U *u = dynamic_cast<U *>(t->f8()); if (!u) return; S *src = u->x118; t->x12C->x290 = u->x164; D_0049DAE0[0] = *src; func_0027FDBC(D_0049DAE0[0].name, s); func_001C5E88(7); func_001CB058(t, D_0049DAE0, 0); }

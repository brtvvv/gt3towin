struct W { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual int f8(int); };
struct Y { char p[0x28C]; W *x28C; };
struct Q { char p[0xC0]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual int f4(); };
struct SB { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual SB *f8(); };
struct U : SB { char q[0x164 - 0x20]; int x164; };
struct T : SB { char q[0xB0 - 0x20]; char xB0[0x128 - 0xB0]; Q *x128; Y *x12C; };
extern char D_00326FB0[], D_00326FC0[], D_00326FD8[];
extern "C" int func_0023D4B8(char *); extern "C" void func_001743B0(T *, char *);
extern "C" void func_00174540(T *t) { if (!func_0023D4B8(t->xB0)) return; U *u = dynamic_cast<U *>(t->f8()); if (!u) return; if (!t->x12C->x28C->f8(u->x164)) { func_001743B0(t, D_00326FB0); return; } int m = 0x10000; __asm__("" : "+r"(m)); if (t->x128->f4() & m) func_001743B0(t, D_00326FC0); else func_001743B0(t, D_00326FD8); }


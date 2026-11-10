struct P { char p[0xC]; unsigned char xC; char q[5]; unsigned char x12; char r[7]; short x1A, x1C, x1E, x20; };
struct G { int p[3]; P *xC; };
extern G D_002F16F0[];
struct OB { char p[0x14]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(int, int); virtual void f7(int, int); virtual void f8(int, int); };
struct O : OB { };
extern "C" void func_00196070(O *o) { if (!o) return; G *g = D_002F16F0; o->f6(g->xC->x1A, g->xC->x1C); o->f7(g->xC->x1E, g->xC->x20); o->f8(g->xC->x12, g->xC->xC); *((char *)o + 0x12) = 1; }


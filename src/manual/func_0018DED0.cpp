struct C { char p[0x1464]; unsigned char x1464; char q[0x16AC - 0x1465]; float x16AC; };
struct O { char p[0x18]; C *c; };
struct L { int n; int x4; O **o; };
struct G { char p[0x18]; L *l; char q[0x84 - 0x1C]; char x84[4]; };
struct B { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29(); virtual void f30(); virtual void f31(); virtual void f32(); virtual void f33();  virtual void set(int); };
struct T : B { G *g; char p0[0x9784 - 8]; int x9784; char p1[0x21C00 - 0x9788]; int x21C00; char p2[0x2FDE0 - 0x21C04]; char x2FDE0[0x30618 - 0x2FDE0]; struct SS { char p[0xA478]; char f; void clr() { f = 0; } } sub; char p3[0x48E40 - 0x30618 - 0xA479]; int x48E40; };
#define F(o) (*(int *)((char *)t + (o)))
extern char D_00353950; extern "C" void func_0017A100(char *, int, int, int); extern "C" void func_001EBBF8(C *, int); extern "C" char *func_00188268(T *); extern "C" void func_001F5B28(char *); extern "C" void func_00211620(char *); extern "C" void func_00176968(char *);
extern "C" void func_0018DED0(T *t) { G *g = t->g; C *c = g->l->o[0]->c; if (t->x21C00 == 2) { if (!t->x48E40 && !t->x9784 && c->x16AC > 1.0f && !c->x1464) { t->x48E40 = 1; func_0017A100(g->x84, 5, 0, 0); func_001EBBF8(c, 3); func_001F5B28(func_00188268(t) + 0xCC); func_00211620(func_00188268(t)); D_00353950 = 3; t->sub.clr(); func_00176968(t->x2FDE0); return; } } t->set(2); }


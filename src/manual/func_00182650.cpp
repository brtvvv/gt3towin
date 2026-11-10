// @flags -fexceptions
extern char D_002EBE28[];
struct B0 { virtual ~B0(); };
struct B : B0 { char d[0x16D3C]; B(); ~B(); };
struct MC { int x0, x4; void f(int); };
struct M { char p[0xC4]; MC mC4; char q[0x7C]; M(); ~M(); };
extern "C" void func_0022FB08(const char *, M *, int);
struct D : B { M m; D() asm("func_00182650"); };
D::D() { M *p = &m; func_0022FB08(D_002EBE28, p, 0x14); MC *c = &p->mC4; c->x4 = 0; c->f(0); }


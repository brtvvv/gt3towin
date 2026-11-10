// @flags -fexceptions
extern char D_00353B68[];
extern "C" int func_00286D90();
struct B { virtual ~B(); B(); };
struct M { char d[0x9740]; M(); ~M(); };
struct D : B { int x4, x8; char *xC; char p[0x30]; M m; int x9780, x9784, x9788, x978C, x9790, x9794; D() asm("func_0017C4B0"); };
D::D() { x4 = 0; x8 = 0; xC = D_00353B68; x9780 = func_00286D90(); x978C = 1; x9784 = 0; x9788 = 0; x9790 = 0; x9794 = 0; }


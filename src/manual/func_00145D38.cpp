// @flags -fexceptions
extern char D_0031CF58[];
extern "C" int func_00145000();
struct S { void f1(int); void f2(const char *); };
struct B0 { int a, b; virtual ~B0(); };
struct B : B0 { char p[0x28]; S m34; B(); };
struct D : B { D() asm("func_00145D38"); };
D::D() { m34.f1(func_00145000()); m34.f2(D_0031CF58); }


// @flags -fexceptions
struct B { int a, b; B(void *); virtual ~B(); };
struct D : B { char r[0x5C]; D(void *x) : B(x) {} };
extern "C" D *func_001479E0(void *a) { return new D(a); }


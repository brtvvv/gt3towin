struct V { char p[0x1C]; virtual ~V(); };
struct B { char p[0x1C]; virtual ~B(); static void operator delete(void *); };
struct C : B { char q[0xE0]; };
struct A { int a, b; virtual ~A(); };
struct M : A { ~M() {} };
struct X : C, M { char r[0x120 - 0x10C]; V *m; ~X(); };
X::~X() { if (m) { V *t = m; m = 0; delete t; } }
// @_$_1X 0x1B4D68

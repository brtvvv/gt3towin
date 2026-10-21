struct V { char p[8]; virtual ~V(); };
struct A { int a, b; virtual ~A(); static void operator delete(void *); };
struct B : A { char q[0x14]; ~B() {} };
struct X : B { V *m; ~X(); };
X::~X() { if (m) delete m; }
// @_$_1X 0x151B78

struct V { char p[0x1C]; virtual ~V(); };
struct B { char p[0x1C]; virtual ~B(); static void operator delete(void *); };
struct X : B { char q[0x180 - 0x20]; V *m; ~X(); };
X::~X() { if (m) delete m; }
// @_$_1X 0x1D6E28

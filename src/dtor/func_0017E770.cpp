struct B { char p[4]; virtual ~B(); };
struct X : B { char q[2480]; ~X(); static void operator delete(void *, unsigned int); };
X::~X() {}
// @_$_1X 0x17E770

struct B { virtual ~B(); };
struct X : B { char q[51388]; ~X(); static void operator delete(void *, unsigned int); };
X::~X() {}
// @_$_1X 0x1870E0

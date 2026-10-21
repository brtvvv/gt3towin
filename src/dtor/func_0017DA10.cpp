struct B { char p[28]; virtual ~B(); };
struct X : B { char q[28]; ~X(); static void operator delete(void *, unsigned int); };
X::~X() {}
// @_$_1X 0x17DA10

struct B { char p[28]; virtual ~B(); };
struct X : B { char q[64]; ~X(); static void operator delete(void *, unsigned int); };
X::~X() {}
// @_$_1X 0x187408

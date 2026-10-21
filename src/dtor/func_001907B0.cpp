struct B { char p[16]; virtual void dummy(); };
struct X : B { ~X(); void cleanup(); static void operator delete(void *, unsigned int); };
X::~X() { cleanup(); }
// @_$_1X 0x1907B0

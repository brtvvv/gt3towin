struct A { int x; virtual ~A(); static void operator delete(void *, unsigned int); };
A::~A() {}
// @_$_1A 0x1A7280

struct M { char p[4]; ~M(); }; struct B { virtual ~B(); static void operator delete(void *, unsigned int); }; struct X : B { char q[0xC8C0 - 4]; M m; char r[0x16D40 - 0xC8C4]; ~X(); }; X::~X() {}
// @_$_1X 0x1820A0

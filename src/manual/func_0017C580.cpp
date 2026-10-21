struct B { virtual ~B(); }; struct M { char d[4]; ~M(); }; struct X : B { char p[0x3C]; M m; char q[0x97C0 - 0x44]; ~X(); static void operator delete(void *, unsigned int); };
X::~X() {}
// @_$_1X 0x17C580

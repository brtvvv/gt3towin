struct V { char p[0x1C]; virtual ~V(); }; struct B { char p[0x1C]; virtual ~B(); static void operator delete(void *); }; struct X : B { char q[0x104 - 0x20]; V *a; V *b; ~X(); }; X::~X() { if (a) delete a; if (b) delete b; }
// @_$_1X 0x117058

struct V { char p[0x1C]; virtual ~V(); }; struct B { char p[0x1C]; virtual ~B(); static void operator delete(void *); }; struct X : B { char q[0xC8 - 0x20]; V *a; V *b; ~X(); }; X::~X() { V *t = a; a = 0; if (t) delete t; t = b; b = 0; if (t) delete t; }
// @_$_1X 0x118748

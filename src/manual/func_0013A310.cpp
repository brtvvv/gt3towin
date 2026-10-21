extern "C" void func_0022B010(void *);
struct V { char p[0x90]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void v3(); };
struct B { char p[0x1C]; virtual ~B(); static void operator delete(void *); };
struct X : B { char q[0x100 - 0x20]; V *m; ~X(); };
X::~X() { if (m) { func_0022B010(m); m->v3(); } }
// @_$_1X 0x13A310

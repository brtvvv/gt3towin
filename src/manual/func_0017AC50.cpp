struct B { virtual ~B(); };
struct X : B { };
struct T { char p[0x3C]; B *x3C; };
extern "C" int func_0017AC50(T *t) { return dynamic_cast<X *>(t->x3C) != 0; }


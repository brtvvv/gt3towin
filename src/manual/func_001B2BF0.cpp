struct MB { char p[0x2C]; virtual ~MB(); void f(); };
struct M : MB { char q[0x3C - 0x30]; virtual ~M() {} };
struct E : MB { char r[0xF0 - 0x30]; virtual ~E(); };
struct B0 { char p[0x1BC]; ~B0(); };
struct T { B0 b; M m1; char pad[0xC]; M m2; E e[7]; ~T(); static void operator delete(void *); };
T::~T() { m1.f(); m2.f(); for (int i = 0; i < 7; i++) e[i].f(); }
// @_$_1T 0x1B2BF0


struct B0 { char p[8]; virtual void f(); };
struct B : B0 { B(void *); char q[0x68 - 0xC]; };
struct D : B { D(void *s) : B(s) {} virtual void f(); };
extern "C" D *func_001479E0(void *s) { return new D(s); }

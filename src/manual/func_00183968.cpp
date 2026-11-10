// @flags -fexceptions
extern char D_0032B000[];
struct B0 { virtual ~B0(); };
struct B : B0 { int x4; void *x8; char d[0x16EB4]; B(); ~B(); void set(char *); };
struct E { char d[0x2044]; E(); };
struct M1 { char d[0x2AC]; M1(); ~M1(); };
struct M2 { char d[0x540]; M2(int); ~M2(); };
struct M3 { M3(); };
struct D : B { E arr[7]; M1 m1; M2 m2; M3 m3; D() asm("func_00183968"); };
D::D() : m2(0) { set(D_0032B000); x8 = &m3; }


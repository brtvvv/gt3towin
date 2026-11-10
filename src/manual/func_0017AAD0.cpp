// @flags -fexceptions
struct M0 { char d[0x820]; M0(); ~M0(); };
struct M1 { int x; M1(); };
struct M2 { char d[0x14]; M2(); };
#define I(o) (*(int *)(p + (o)))
struct D { char p[0x84]; M0 m0; M1 a, b; M2 c; virtual ~D(); D() asm("func_0017AAD0"); };
D::D() { I(0x18) = 0; I(0x60) = 1; I(0x28) = 0; I(0x38) = 0; I(0x3C) = 0; I(0x58) = 0; I(0x5C) = 0; I(0x64) = 0; I(0x68) = 0; I(0x6C) = 0; I(0x70) = 0; I(0x74) = 0; I(0x7C) = 0; I(0x80) = 0; }


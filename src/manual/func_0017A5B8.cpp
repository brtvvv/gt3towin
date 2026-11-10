// @flags -fexceptions
struct M0 { char d[0x28]; M0(); ~M0(); };
struct M1 { char d[0x18]; M1(); };
struct D { M0 m0; M1 m1; long x40; int x48, x4C, x50; virtual ~D(); D() asm("func_0017A5B8"); };
D::D() { x40 = 0; x48 = 0; x4C = 0; x50 = 0; }


// @flags -fexceptions
struct B { int a, b; virtual ~B(); B(); };
struct M1 { char d[0x2BC]; M1(int); ~M1(); };
struct MBB { char p[0x2C]; virtual ~MBB(); };
struct MB : MBB { ~MB() {} };
struct MM { char d[4]; ~MM(); };
struct M2 : MB { char q[0x20]; MM mm; M2(); };
struct D : B { M1 m1; M2 m2; void init(); D(int) asm("func_001A3FC0"); };
D::D(int a) : m1(a) { init(); }


// @flags -fexceptions
struct B { int a, b; virtual ~B(); B(); };
struct MBB { char p[0x2C]; virtual ~MBB(); };
struct MB : MBB { ~MB() {} };
struct MM { char d[4]; ~MM(); };
struct M : MB { char q[0x24]; MM mm; M(); };
struct D : B { M m; void init(); D() asm("func_001A3978"); };
D::D() { init(); }


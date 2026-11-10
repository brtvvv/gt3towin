// @flags -fexceptions
struct K { int v; K() : v(0x87654321) {} };
struct A1 { char d[0x480 - 0x300]; A1(); ~A1(); };
struct A2 { char d[0x1940 - 0x480]; A2(); ~A2(); };
struct A3 { char d[0x140]; A3(); ~A3(); };
struct A4 { char d[0x140]; A4(); ~A4(); };
struct A5 { char d[0x140]; A5(); ~A5(); };
struct A6 { char d[0x180]; A6(); ~A6(); };
struct A7 { char d[0x140]; A7(); ~A7(); };
struct A8 { char d[0x180]; A8(); ~A8(); };
struct A9 { char d[0x180]; A9(); ~A9(); };
struct A10 { A10(); };
struct D { char p[0x2C8]; K k; char q[0x300 - 0x2CC]; A1 a1; A2 a2; A3 a3; A4 a4; A5 a5; A6 a6; A7 a7; A8 a8; A9 a9; A10 a10; D() asm("func_002086B8"); };
D::D() {}


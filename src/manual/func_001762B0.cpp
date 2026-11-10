// @flags -fexceptions
struct MC { char d[0x10]; MC(); ~MC(); };
struct C0 { int x0, x4; C0() : x0(0), x4(0) {} virtual ~C0() {} };
struct C : C0 { MC m; char pad[0x9A0 - 0x1C]; C() {} };
struct C2 : C { int x9A0, x9A4; C2() asm("func_001762B0"); };
C2::C2() { x9A0 = 0; x9A4 = 0; }


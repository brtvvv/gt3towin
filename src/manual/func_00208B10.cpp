struct B { virtual ~B(); };
struct M0 { char d[8]; ~M0(); };
struct M1 { char d[8]; ~M1(); };
struct M2 { char d[8]; ~M2(); };
struct M3 { char d[8]; ~M3(); };
struct M4 { char d[8]; ~M4(); };
struct M5 { char d[8]; ~M5(); };
struct M6 { char d[8]; ~M6(); };
struct M7 { char d[8]; ~M7(); };
struct M8 { char d[8]; ~M8(); };
struct M9 { char d[8]; ~M9(); };
struct E { char p[0x300]; M0 a; char q0[0x180-8]; M1 b; char q1[0x1940-0x480-8]; M2 c; char q2[0x140-8]; M3 d; char q3[0x140-8]; M4 e; char q4[0x140-8]; M5 f; char q5[0x180-8]; M6 g; char q6[0x140-8]; M7 h; char q7[0x180-8]; M8 i; char q8[0x180-8]; M9 j; char q9[0x24C0-0x22C0-8]; };
struct X { char d[8]; ~X(); };
struct C : B { char p[0x2FC]; E e[4]; char pad[0x963C - 0x9600]; X x; virtual ~C(); };
C::~C() {}
// @_$_1C 0x208B10


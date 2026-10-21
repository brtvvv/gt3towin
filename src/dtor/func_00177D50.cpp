struct M0 { char d[496]; ~M0(); };
struct M1 { char d[4072]; ~M1(); };
struct M2 { char d[1740]; ~M2(); };
struct M3 { char d[2172]; ~M3(); };
struct X { char pad0[32]; M0 m0; M1 m1; M2 m2; M3 m3; virtual ~X(); void c0(); static void operator delete(void *, unsigned int); } __attribute__((aligned(8)));
X::~X() { c0(); }
// @_$_1X 0x177D50

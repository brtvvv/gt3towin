struct M0 { char d[2108]; ~M0(); };
struct X { char pad0[132]; M0 m0; virtual ~X(); void c0(); void c1(); void c2(); static void operator delete(void *, unsigned int); } __attribute__((aligned(8)));
X::~X() { c0(); c1(); c2(); }
// @_$_1X 0x17AB98

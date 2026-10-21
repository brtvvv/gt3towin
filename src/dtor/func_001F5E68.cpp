struct M0 { char d[84]; ~M0(); };
struct X { char pad0[8]; M0 m0; virtual ~X(); static void operator delete(void *, unsigned int); };
X::~X() { }
// @_$_1X 0x1F5E68

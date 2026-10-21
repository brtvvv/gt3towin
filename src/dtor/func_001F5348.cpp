struct M0 { char d[64]; ~M0(); };
struct X { M0 m0; virtual ~X(); static void operator delete(void *, unsigned int); };
X::~X() { }
// @_$_1X 0x1F5348

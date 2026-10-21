extern "C" { void func_00146A90(void *, int); void func_0026D5B8(int); }
struct A { int a, b; virtual ~A(); };
struct M : A { ~M() {} };
struct X : M { int h; ~X(); void close(); };
X::~X() { close(); func_0026D5B8(h); }
// @_$_1X 0x1469E8

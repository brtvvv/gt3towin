struct Object { char d[0x1C]; virtual ~Object(); static void operator delete(void *); }; extern "C" int func_001B4820(void); extern "C" void func_0026BFC0(int, int); struct X : Object { int h; ~X(); };
X::~X() { if (h) { func_0026BFC0(func_001B4820(), h); h = 0; } }
// @_$_1X 0x1C6C48

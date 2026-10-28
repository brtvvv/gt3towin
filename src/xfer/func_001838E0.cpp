typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x33C40]; };
extern "C" void func_001838E0(void) { new T; }

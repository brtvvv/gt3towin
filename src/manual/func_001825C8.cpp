typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x16EC0]; };
extern "C" void func_001825C8(void) { new T; }

typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0xC8C0]; };
extern "C" void func_00181940(void) { new T; }


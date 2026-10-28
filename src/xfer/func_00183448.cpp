typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x34D80]; };
extern "C" void func_00183448(void) { new T; }

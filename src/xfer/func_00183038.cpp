typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x34580]; };
extern "C" void func_00183038(void) { new T; }

typedef unsigned int size_t;
struct T { T(int); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x3AC80]; };
extern "C" void func_00189F18(void) { new T(0); }


typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x3EC80]; };
extern "C" void func_00183E20(void) { new T; }

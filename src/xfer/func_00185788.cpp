typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x35000]; };
extern "C" void func_00185788(void) { new T; }

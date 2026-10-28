typedef unsigned int size_t;
struct T { T(int); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x48E80]; };
extern "C" void func_0018D950(void) { new T(0); }


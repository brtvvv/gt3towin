typedef unsigned int size_t;
struct T { T(); static void *operator new(size_t); static void operator delete(void *, size_t); char p[0x3B840]; };
extern "C" void func_0018AB38(void) { new T; }

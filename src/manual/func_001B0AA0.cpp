struct T { T(); char p[0xC4]; void *operator new(unsigned); void operator delete(void *); };
extern "C" int func_001C34A0(int, int);
extern "C" void func_001C38A0(int, int, int);
extern "C" void func_001B0AA0(int a, int b) { if (func_001C34A0(a, b)) func_001C38A0(a, b, 1); else new T; }

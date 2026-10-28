struct T { T(char *, int, int, int); char p[0x228]; void *operator new(unsigned); void operator delete(void *); };
extern "C" void func_00141008(char *s, int a, int b, int c, int d) { char *p = s + 0xE58; new T(p, d, c, a); }

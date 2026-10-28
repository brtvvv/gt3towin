struct T { T(int, int); char p[0x100]; void *operator new(unsigned); void operator delete(void *); void init(char *); };
extern char D_00334318[];
extern "C" T *func_001B4A60(int a, int b, int c, int d) { T *t = new T(d, b); t->init(D_00334318); return t; }

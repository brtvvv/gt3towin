extern "C" int func_0026FAC0(unsigned char *); extern "C" void func_00253458(int);
struct T { int x0; unsigned char x4; };
extern "C" void func_002711F8(T *t, int m) { t->x4 |= m & 0xF; while (func_0026FAC0(&t->x4)) func_00253458(1); }


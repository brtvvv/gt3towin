struct T { int x0; };
extern "C" char *func_001F3A90(T *, int); extern "C" int func_00191630(int *); extern "C" void func_001910D8(int *, int);
extern "C" void func_001F3170(T *t, int a, int b) { char *s = func_001F3A90(t, a) + 0xF84; if (!a) { int x = t->x0; int p[4]; func_00191630(p); p[2] = 3; p[0] = 0; func_001910D8(p, x); } *(int *)(s + 0x530) = b; }


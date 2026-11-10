struct E { int x0; char x4[4]; unsigned short x8, xA; };
struct T { char p[0x16]; unsigned short x16; char q[4]; E *x1C; };
extern "C" void func_00253260(); extern "C" int func_00255B50(char *, char *, int, int, int, int); extern "C" void func_00287120(int); extern "C" void func_00252080(int); extern "C" void func_00252270(int, int, int); extern "C" void func_002520A0(int); extern "C" void func_002520C0(int);
extern "C" void func_0024A8F8(T *t) { func_00253260(); for (int i = 0; i < t->x16; i++) { char buf[0x60]; E *e = &t->x1C[i]; int r = func_00255B50(buf, e->x4, 0, 0, e->x8, e->xA); func_00287120(0); func_00252080(2); func_00252270(2, (int)buf, 6); func_00252270(2, e->x0, r); func_002520A0(2); } func_002520C0(2); }


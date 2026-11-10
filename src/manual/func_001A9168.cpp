struct E { char d[0x50]; };
struct T { char p[0x10]; int x10; char q[0xAD0 - 0x14]; E e[4]; };
extern char D_002C3C38[], D_002C3C48[];
extern "C" void func_002569B8(int, char *); extern "C" void func_00252500(int); extern "C" void func_00256908(int, int, char *); extern "C" void func_00252790(int);
extern "C" void func_001A9168(T *t) { func_002569B8(0, D_002C3C38); func_002569B8(3, D_002C3C48); int k = 0x65; for (int i = 0; i < 4; i++, k++) { if ((t->x10 >> (i + 11)) & 1) { func_00252500(k); func_00256908(k, 13, t->e[i].d); func_00256908(k, 0, t->e[i].d + 0x10); func_00256908(k, 1, t->e[i].d + 0x20); func_00256908(k, 4, t->e[i].d + 0x30); } else func_00252790(k); } }


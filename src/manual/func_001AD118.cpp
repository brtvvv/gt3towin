struct E { char a[0x10]; char b[0x40]; };
struct T { E e[7]; char p[0x230 - 0x230]; int x230, x234, x238; char *x23C; float x240, x244; };
extern "C" void func_002569B8(int, char *); extern "C" void func_00252500(int); extern "C" void func_00256908(int, int, char *); extern "C" void func_00252790(int); extern "C" void func_001A92C8(char *, float, float);
extern "C" void func_001AD118(T *t) { func_002569B8(0, t->x23C + 0xEF0); if (t->x238) { int k = 0x65; int i; for (i = 0; i < t->x230; i++, k++) { func_00252500(k); func_00256908(k, 13, t->e[i].a); func_00256908(k, 0, t->e[i].b); func_00256908(k, 1, t->e[i].b + 0x10); func_00256908(k, 4, t->e[i].b + 0x20); } for (; i < 8; i++, k++) func_00252790(k); } else func_001A92C8(t->x23C, t->x240, t->x244); }


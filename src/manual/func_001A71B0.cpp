struct E { char *x0; int x4; };
struct T { char p[0x1C]; E e[2]; };
extern "C" void func_001A71B0(T *t) { for (int i = 0; i < 2; i++) { char *p = t->e[i].x0 + 0x41D08; for (int j = 39; j >= 0; j--) { *(int *)p = 0; p -= 0x1B00; } } }


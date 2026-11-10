struct T { char p[0x24]; int x24; };
extern "C" int func_00289BD8(T *, int, int); extern "C" void func_0026ADD8();
extern "C" void func_0025C2B8(T *t, int a, int b) { t->x24 = 0; do { while (func_00289BD8(t, a, b) < 0) func_0026ADD8(); func_0026ADD8(); } while (!t->x24); }


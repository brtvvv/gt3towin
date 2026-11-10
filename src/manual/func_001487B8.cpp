struct T { char p[0xFBC0]; int xFBC0; };
extern "C" int func_001488F0(T *); extern "C" int func_00148858(T *); extern "C" void func_00253458(int);
extern "C" void func_001487B8(T *t) { while (!func_001488F0(t)) func_00253458(1); t->xFBC0 = 4; while (!func_00148858(t)) func_00253458(1); }


struct T { char p[0x10]; unsigned short x10; };
extern "C" int func_00232E30(T *); extern "C" void func_00238E98(T *); extern "C" void func_00238A88(T *, int);
extern "C" int func_00238E38(T *t) { if (!func_00232E30(t)) return 0; func_00238E98(t); if (t->x10 != 2) return 1; func_00238A88(t, 0x42); func_00238A88(t, 0x4D); return 1; }


struct T { char p[0xFB94]; int xFB94; char q[0xFBC0 - 0xFB98]; int xFBC0, xFBC4, xFBC8, xFBCC; char r[0x17BE0 - 0xFBD0]; int x17BE0; };
extern "C" int func_0026AE68(void *, T *, int, int, int); extern "C" void func_00148728();
extern "C" void func_00148748(T *t) { t->xFBC4 = 0; t->xFBC8 = 0; t->xFBCC = 0; t->xFB94 = 0; t->xFBC0 = 0; t->x17BE0 = func_0026AE68((void *)func_00148728, t, 0x10, ((int)t + 0xFBDF) & -16, 0x8000); }

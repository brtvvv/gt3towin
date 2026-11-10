struct T { char p[0x1400]; char x1400[8]; int x1408, x140C, x1410; };
extern T *D_003548F8;
extern "C" void func_0026AE48(int); extern "C" void func_0026AF50(char *); extern "C" void func_00286EB0(int); extern "C" void func_0026D5B8(T *);
extern "C" void func_0023FC50() { T *t = D_003548F8; if (!t) return; t->x1410 = 1; func_0026AE48(t->x1408); func_0026AF50(t->x1400); func_00286EB0(t->x1408); func_00286EB0(t->x140C); func_0026D5B8(D_003548F8); D_003548F8 = 0; }


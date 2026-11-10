struct T { int x0[12]; char x30[12][16]; long xF0[12]; int x150[12]; char n[12][32]; };
extern "C" void func_00213700(T *t, int i) { t->x0[i] = 0x157529FF; t->x30[i][0] = 0; t->xF0[i] = 0; t->x150[i] = 0; __builtin_strcpy(t->n[i], "------------------------------"); }


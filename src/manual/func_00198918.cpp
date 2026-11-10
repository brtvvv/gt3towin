struct T { char p[0x18]; int x18; int x1C; int x20; int x24[8]; };
extern "C" void func_00198918(T *t, int v) { if (t->x1C >= 8) { for (int i = 0; i < 7; i++) t->x24[i] = t->x24[i + 1]; t->x1C--; } t->x24[t->x1C] = v; t->x1C++; t->x18++; }


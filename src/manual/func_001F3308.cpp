struct R { char p[0x20E0]; int k; };
struct A { char p[8]; R **x8; };
struct B { char p[0x18]; A *x18; };
struct X { char p[0x1465]; char x1465; };
struct T { B *x0; char p[0xE384 - 4]; int n; int o[8]; };
extern "C" X *func_001F3A90(T *, int);
extern "C" void func_001F3308(T *t) { int i; for (i = 7; i >= 0; i--) t->o[i] = -1; for (i = 0; i < t->n; i++) { int k = t->x0->x18->x8[i]->k; func_001F3A90(t, i)->x1465 = k + 1; t->o[k] = i; } }


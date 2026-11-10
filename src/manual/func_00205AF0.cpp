struct T { char p[0xE8]; int xE8, xEC, xF0; char q[0x180 - 0xF4]; int x180, x184; float x188; };
extern "C" void func_00205150(T *, int, float);
extern "C" void func_00205AF0(T *t, int a, int b, int c) { func_00205150(t, a, 0.0f); t->x184 = b; t->x180 = c; t->xE8 = 3; t->xEC = 1500; t->xF0 = 150; t->x188 = 0.5f; }

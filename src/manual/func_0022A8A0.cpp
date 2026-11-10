struct T { int x0, x4; char p[0x1C - 8]; float x1C; int p20; int x24, x28, x2C, x30; };
extern "C" void func_00225680(int);
extern "C" void func_0022A8A0(T *t) { int d = (int)t - t->x4; if (!d) return; t->x4 = (int)t; if (t->x2C) { t->x2C += d; func_00225680(t->x2C); } if (t->x24) t->x24 += d; if (t->x28) t->x28 += d; if (t->x30) t->x30 += d; t->x1C /= 50.0f; }


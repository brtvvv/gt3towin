struct T { char p[0x38]; float x38, x3C; char q[0x16C - 0x40]; float x16C; };
extern "C" void func_0025B248(float, float, float, float); extern "C" float func_001D7DA0(T *); extern "C" float func_001D7DE0(T *); extern "C" void func_00256DB0(int, int, int, int);
extern "C" void func_001D7280(T *t) { if (t->x16C == 0.0f) return; func_0025B248(1.0f, 1.0f, 1.0f, t->x16C); float x = func_001D7DA0(t); float y = func_001D7DE0(t); func_00256DB0((int)x, (int)y, (int)(x + t->x38), (int)(y + t->x3C)); }


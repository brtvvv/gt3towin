struct O { char p[0x388]; float x388; char q[0x4F0 - 0x38C]; };
struct T { char p[0x388]; float x388; char q[0x498 - 0x38C]; O *x498; float x49C[8]; float x4BC[8]; };
extern "C" void func_001FC020(T *t, O *o, int n) { t->x498 = o; for (int i = 0; i < n; i++) { float v = t->x388 + o[i].x388; t->x49C[i] = v; t->x4BC[i] = v * v; } }


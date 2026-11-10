struct T { char p[0x28]; float x28; char q[8]; float x34; char r[0x9C - 0x38]; T *x9C; };
extern "C" void func_001D1268(T *t, float *a, float *b) { *a = *b = 0.0f; if (t->x9C) func_001D1268(t->x9C, a, b); *a += t->x28; *b += t->x34; }


extern float D_00351F10;
struct T { char p[0x18]; float b; char q[0x13F0]; float a; };
extern "C" float func_001ECE40(void *s, T *t, float x, float y) { float a = t->a; float z = 0.0f; float b = t->b; if (D_00351F10 < a && x < z && -a < x && -b < y && y < b) z = (a + x) / a; return z; }


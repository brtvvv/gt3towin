struct T { long x0; float x8; char p[0x208 - 0xC]; float x208; char q[0x408 - 0x20C]; char x408[4]; };
extern "C" float func_002073A8(char *, float);
extern "C" float func_002074F0(T *t, float x) { long n = t->x0; float b = t->x8; if (n > 0) for (int i = 0; i < n; i++); float v = t->x208 * 5.0f; b += v; if (0 < v) v = x * func_002073A8(t->x408, v / (x * 3.0f)); if (v < 0) v = -x * func_002073A8(t->x408, -v / (x * 3.0f)); return b + v; }


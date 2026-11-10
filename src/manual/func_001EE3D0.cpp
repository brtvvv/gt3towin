struct T { char p[0xB8F4]; signed char b[8][8]; float f[8][8]; char q[0xE384 - 0xB934 - 0x100]; int n; };
struct R { int v; float f; };
extern "C" char *func_001F3A90(T *, int); extern "C" void func_001EDFA0(T *, char *, char *, int *, float *);
extern "C" void func_001EE3D0(T *t) { int i, j; int n = t->n; for (i = 0; i < n; i++) for (j = 0; j < n; j++) { if (i == j) continue; R r; char *a = func_001F3A90(t, j) + 0xF84; func_001EDFA0(t, a, func_001F3A90(t, i) + 0xF84, &r.v, &r.f); if (r.v > 127) r.v = 127; else if (r.v < -127) r.v = -127; t->b[i][j] = r.v; t->f[i][j] = r.f; } }


struct T { char p[0x520]; float x520; char q[0x5CC - 0x524]; float x5CC; char r[4]; int n; float x5D8; };
extern char D_002F2F98[], D_00325960[], D_00353588[];
extern "C" void func_0025B270(float, float, float); extern "C" void func_0023DC50(char *, char *); extern "C" void func_0023DE20(char *, int); extern "C" void func_0023E0E8(char *, float, float, float); extern "C" void func_0023E6E0(char *, char *, int);
extern "C" void func_0016F258(T *t, float y) { int i = 0; float x = t->x5CC + 16.0f / t->x520; func_0025B270(1.0f, 1.0f, 1.0f); func_0023DC50(D_002F2F98, D_00325960); func_0023DE20(D_002F2F98, 0);
 for (; i <= t->n; i += 100) { func_0023E0E8(D_002F2F98, x, y + t->x5D8 * i / t->n + 4.0f, 0.0f); func_0023E6E0(D_002F2F98, D_00353588, i); } }


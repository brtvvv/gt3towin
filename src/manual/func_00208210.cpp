struct T { char p[0x38]; int x38; };
struct U { char p[0x38]; float x38; };
extern float D_003521DC;
extern "C" int func_00190C40(int, int *, int, float); extern "C" int func_002081C8(int, float, float, float);
extern "C" int func_00208210(T *t, U *u, int k) { float m = D_003521DC; int o = t->x38; if (k) m = 1.0f; float x = u->x38; int st[32]; int n = func_00190C40(o, st, 0x20, x); for (int i = 0; i < n; i++) if (func_002081C8(st[i], x, 0.0f, m)) return st[i]; return 0; }


extern char D_002D40C0[];
extern "C" float func_001DBBD8(char *);
struct T { float x0, x4, x8; };
extern "C" void func_001DAC28(T *t, float x) { char *d = D_002D40C0; if (func_001DBBD8(d) < x) t->x8 = func_001DBBD8(d); else t->x8 = x; }


extern char D_002D40C0[];
extern "C" float func_001DBB80(char *);
struct T { float x0, x4, x8; };
extern "C" void func_001DAB30(T *t, float x) { char *d = D_002D40C0; if (func_001DBB80(d) < x) t->x4 = func_001DBB80(d); else t->x4 = x; }


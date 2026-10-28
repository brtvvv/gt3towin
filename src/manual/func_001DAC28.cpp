struct S { int a; float b; float f; };
extern char D_002D40C0[];
extern "C" float func_001DBBD8(char *);
extern "C" void func_001DAC28(S *s, float x) { if (func_001DBBD8(D_002D40C0) < x) s->f = func_001DBBD8(D_002D40C0); else s->f = x; }


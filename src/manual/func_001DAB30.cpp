struct S { int a; float f; };
extern char D_002D40C0[];
extern "C" float func_001DBB80(char *);
extern "C" void func_001DAB30(S *s, float x) { if (func_001DBB80(D_002D40C0) < x) s->f = func_001DBB80(D_002D40C0); else s->f = x; }


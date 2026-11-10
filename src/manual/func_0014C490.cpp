struct R { char p[0x18]; float x18, x1C, x20, x24; };
extern char D_002F7008[], D_00353180[];
extern "C" R *func_0014CA58(int); extern "C" float func_00246B60(char *, float); extern "C" int func_002469E0(char *); extern "C" void func_0026D950(char *, char *, int, int);
extern "C" void func_0014C490(int a, char *b) { R *r = func_0014CA58(a); if (!r) return; char *f0 = D_002F7008; char *fmt = D_00353180; int v = (int)func_00246B60(f0, r->x24); func_0026D950(b, fmt, v, func_002469E0(f0)); }


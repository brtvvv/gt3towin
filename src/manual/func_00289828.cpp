struct S { char p[0x1C]; char *arr; int n; };
extern "C" char *func_002897F8(S *, int);
extern "C" char *func_00289828(S *s, int i) { if (i < 0 || i >= s->n) return func_002897F8(s, i); return s->arr + i * 64; }


struct S { char p[0x20]; unsigned short n; char q[0xE]; char *arr; };
extern "C" int func_0022A650(void *, int);
extern "C" int func_0022AC28(S *s, int i, int x) { if (i >= s->n) return 0; return func_0022A650(s->arr + i * 64, x); }


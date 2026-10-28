struct S { char p[0x18]; int cnt; int n; int pad; int a[8]; };
extern "C" void func_00198918(S *s, int v) { if (s->n >= 8) { for (int i = 0; i < 7; i++) s->a[i] = s->a[i + 1]; s->n--; } s->a[s->n] = v; s->n++; s->cnt++; }


struct R { int a; int n; };
struct S { char p[0x38]; R *r; };
extern "C" void *func_0027EBC8(void *, const void *, int);
extern "C" void func_001F5C10(S *s, int *buf) { if (!s) return; R *r = s->r; if (!r) return; func_0027EBC8((char *)buf + *buf, r, r->n); *buf += (r->n + 3) & -4; }


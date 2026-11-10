struct R { int x0, x4; };
struct S { char p[0x38]; R *x38; };
extern "C" void *func_0027EBC8(void *, const void *, unsigned int);
extern "C" void func_001F5C10(S *s, int *b) { if (!s) return; R *r = s->x38; if (!r) return; func_0027EBC8((char *)b + b[0], r, r->x4); b[0] += (r->x4 + 3) & -4; }


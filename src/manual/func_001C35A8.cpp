struct S { char p[8]; int f; char q[0x40]; void *d; };
extern "C" void *func_001C34A0(S *, void *);
extern "C" int func_001C3570(void *, void *);
extern "C" int func_001C35A8(S *s, void *x, void *y) { if (!s->f) return 0; void *v = y ? func_001C34A0(s, y) : s->d; if (!v) return 0; return func_001C3570(x, v); }


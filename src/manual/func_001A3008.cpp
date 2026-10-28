struct E { char p[4]; float a, b, c; char q[0x84]; float r; float ir; };
extern E **D_00353B0C;
extern E D_002C1A80;
struct S { char p[0x10]; int n; };
extern "C" void func_001A3008(S *s) { E *d = &D_002C1A80; int n = s->n + 1; for (int i = 0; i < n; i++) { E *e = D_00353B0C[i]; e->a = d->a; e->b = d->b; e->c = d->c; e->r = d->r; e->ir = 1.0f / d->r; } }

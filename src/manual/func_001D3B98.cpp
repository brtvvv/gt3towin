// @flags -fexceptions
extern char D_00339580[], D_00339590[], D_003395A0[], D_003395B0[];
struct S { char p[0x10]; char *x10, *x14, *x18, *x1C; };
struct B { char p[0x1C]; virtual ~B(); B(); };
struct D : B { char q[0x1E4]; int x204, x208; char *x20C, *x210, *x214, *x218; void init(); D(S *) asm("func_001D3B98"); };
D::D(S *s) { char *a = s->x14, *b = s->x10, *c = s->x18, *d = s->x1C; x20C = a ?: D_00339580; x214 = b ?: D_00339590; x210 = d ?: D_003395A0; x218 = c ?: D_003395B0; x204 = 0; x208 = 0; init(); }

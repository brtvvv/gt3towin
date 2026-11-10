struct R { char p[8]; unsigned char x8, x9, xA; };
struct E { char d[0x70]; };
struct X { char p[0x11B]; char x11B; char q; char x11D; char r; char x11F; char s[0x292 - 0x120]; E e[3]; };
struct Y { char p[0x18]; long x18; long a[3]; char q[0x40 - 0x38]; long b[3]; };
struct T { char p[0x1D0]; char b[4]; };
extern "C" R *func_00232658(char *, int, long); extern "C" void func_00234420(T *, E *, R *, R *);
extern "C" void func_00234320(T *t, X *x, Y *y) { long *pa = y->a, *pb = y->b; E *e = x->e; for (int i = 0; i < 3; i++, e++) { R *r0 = func_00232658(t->b, 0x1B, *pa++); R *r1 = func_00232658(t->b, 0x1A, *pb++); func_00234420(t, e, r0, r1); } R *r = func_00232658(t->b, 0x19, y->x18); x->x11D = r->x8; x->x11B = r->xA; x->x11F = r->x9; }


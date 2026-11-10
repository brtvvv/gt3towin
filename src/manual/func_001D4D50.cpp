// @flags -fexceptions
extern char D_00339968[];
struct T { char p[0x10]; const char *x10; };
struct B { char p[0x1C]; virtual ~B(); B(T *); };
struct D : B { void set(const char *); D(T *t) asm("func_001D4D50"); };
D::D(T *t) : B(t) { const char *n = t->x10; if (!n) n = D_00339968; set(n); }


// @flags -fexceptions
extern int D_0035349C;
extern char D_00325A38[];
extern "C" void func_00171638(void *);
extern "C" void func_00171830(void *);
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x1C4]; B(int *); ~B(); void *create(const char *, int *, int); void m(int); };
struct D : B { void *x1E4; D(int *) asm("func_00171BD8"); };
D::D(int *p) : B(p) { D_0035349C = 0; void *r = create(D_00325A38, p, 0); x1E4 = r; func_00171638(r); m(*p); func_00171830(x1E4); }


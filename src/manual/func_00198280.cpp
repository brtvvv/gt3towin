// @flags -fexceptions
extern char D_003539C0[];
struct B { char pad[0x14]; virtual ~B(); B(); };
struct D : B { unsigned int x18; int x1C; void set(char *); D() asm("func_00198280"); };
D::D() : x18(0x801880D0u), x1C(0) { set(D_003539C0); }


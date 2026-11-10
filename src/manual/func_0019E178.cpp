// @flags -fexceptions
extern char D_00353A90[];
struct B0 { char pad[0x14]; virtual ~B0(); B0(); };
struct B1 : B0 { int x18, x1C; B1(); ~B1() {} };
struct M { char p[0x12]; char x12; char q[0xD]; unsigned int x20; char r[0x44]; unsigned int x68, x6C; M(); ~M(); };
struct D : B1 { M m; void set(const char *); D() asm("func_0019E178"); };
D::D() { M *p = &m; set(D_00353A90); p->x68 = 0x80808068u; p->x6C = 0x800000F0u; p->x20 = 0x80A0A088u; p->x12 = 1; }

// @flags -fexceptions
struct M { char d[0x134]; M(); ~M(); };
struct D { M m1, m2; int a[8]; virtual ~D(); D() asm("func_001CC8F0"); };
D::D() { a[0] = 0; a[1] = 0; a[2] = 0; a[3] = 0; a[4] = 0; a[5] = 0; a[6] = 0; a[7] = 0; }


struct X { char p[0x1BC]; int x1BC, x1C0, x1C4, x1C8; };
struct Y { char p[0x109]; unsigned char x109; char q[2]; unsigned char x10C, x10D; char r[3]; unsigned char x111; char s[2]; unsigned char x114, x115, x116; };
extern "C" unsigned char func_00234FE0(X *, int, int, int, int);
extern "C" void func_00234E98(X *x, Y *y, unsigned char *z) { y->x10C = func_00234FE0(x, z[0x14], z[0x15], z[0x11], x->x1BC); y->x10D = z[0x13]; y->x111 = func_00234FE0(x, z[0x19], z[0x1A], z[0x18], x->x1C0); y->x114 = func_00234FE0(x, z[0x1F], z[0x20], z[0x1E], x->x1C4); y->x115 = z[0x22]; y->x116 = func_00234FE0(x, z[0x24], z[0x25], z[0x23], x->x1C8); int v = z[0x17] & 3; v |= (z[0x16] & 3) << 2; v |= (z[0x1D] & 3) << 4; v |= (z[0x1C] & 3) << 6; y->x109 = v; }


// @flags -fexceptions
extern char *D_00353D20;
extern "C" void func_0027FDBC(char *, const char *);
struct M20 { char d[0x1F0]; M20(); ~M20(); };
struct M210 { char d[0xFB8]; M210(); ~M210(); };
struct E14 { char d[0x14]; E14(); };
struct E4 { int d; E4(); };
struct M11F8 { char d[0x6C0]; M11F8(); ~M11F8(); };
struct M18C4 { char d[0x818]; M18C4(); ~M18C4(); };
struct M2104 { char d[0x20]; M2104(); };
struct D { int x0, x4, x8, xC, x10, x14, x18, x1C; M20 m20; M210 m210; E14 m11C8, m11DC; E4 m11F0; unsigned int x11F4; M11F8 m11F8;
    int x18B8, x18BC, x18C0; M18C4 m18C4; int x20DC, x20E0, x20E4, x20E8, x20EC, x20F0, x20F4, x20F8, x20FC, x2100; M2104 m2104; char x2124[0x1C];
    virtual ~D(); void m(int); D() asm("func_00177BB8"); };
D::D() {
    x0 = 0; x4 = 0; x8 = 0; x18 = 0; x20DC = 0; x18B8 = 0; x18C0 = 0; x20E0 = 0; x20E4 = 0; x20E8 = 0; x20EC = 0; x20F8 = 0; x20FC = 0; x2100 = 0;
    x14 = -1; x11F4 = 0x157529FFu; x18BC = 1; x20F0 = 1; x20F4 = 1;
    func_0027FDBC(x2124, D_00353D20);
    m(0);
}

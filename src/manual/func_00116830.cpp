// @flags -fexceptions
extern "C" void func_001D29F0();
extern "C" unsigned char *func_0026D660(int, int);
extern "C" void func_001B4840(void *, int);
extern "C" void func_00243858();
extern "C" void func_00253458(int);
extern "C" void func_002438C8();
extern "C" void func_001B48A0();
extern "C" void func_0026D5B8(void *);
struct S { int d[15]; };
struct X { char d[0x3BE0]; X(S *); int run(); ~X(); };
extern "C" int func_00116830() {
    func_001D29F0();
    unsigned char *h = func_0026D660(0x40, 0x400000);
    for (int i = 0; i <= 0x3FFFFF; i++) h[i] = 0xA5;
    func_001B4840(h, 0x400000);
    func_00243858();
    func_00253458(2);
    int r;
    { S s; s.d[0] = 0; s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; s.d[4] = 0; s.d[5] = 0; s.d[6] = 0; s.d[7] = 0; s.d[8] = 0; s.d[9] = 0; s.d[10] = 0; s.d[11] = 0; s.d[12] = 0; s.d[13] = 0; s.d[14] = 0; X t(&s); r = t.run(); func_00253458(1); }
    func_002438C8();
    for (int i = 0x3FFFF0; i <= 0x3FFFFF; i++) ;
    func_001B48A0();
    func_0026D5B8(h);
    return r;
}


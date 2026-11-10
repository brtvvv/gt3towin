// @flags -fexceptions
extern "C" void func_001D29F0(void *);
extern "C" void *func_0026D660(int, int);
extern "C" void func_001B4840(void *, int);
extern "C" void func_00243858();
extern "C" void func_00253458(int);
extern "C" void func_002438C8();
extern "C" void func_001B48A0();
extern "C" void func_0026D5B8(void *);
struct X { char d[0x3BE0]; X(void *); int run(); ~X(); };
extern "C" int func_001165F0(void *p0) {
    func_001D29F0(p0);
    void *h = func_0026D660(0x40, 0x380000);
    func_001B4840(h, 0x37FFF0);
    func_00243858();
    func_00253458(2);
    int r;
    { X t(p0); r = t.run(); func_00253458(1); }
    func_002438C8();
    func_001B48A0();
    func_0026D5B8(h);
    return r;
}


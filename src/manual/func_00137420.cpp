// @flags -fexceptions
extern int D_00354C18;
extern "C" void func_001D29F0();
extern "C" void *func_0026D660(int, int);
extern "C" void func_001B4840(void *, int);
extern "C" void func_00253458(int);
extern "C" void func_001B48A0();
extern "C" void func_0026D5B8(void *);
struct X { char d[0xE50]; X(); void f(); ~X(); };
extern "C" int func_00137420() {
    D_00354C18 = 0;
    func_001D29F0();
    void *h = func_0026D660(0x40, 0x20000);
    func_001B4840(h, 0x20000);
    { X t; t.f(); func_00253458(1); }
    func_001B48A0();
    func_0026D5B8(h);
    return 1;
}


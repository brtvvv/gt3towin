// @flags -fexceptions
extern "C" void func_001D29F0();
extern "C" void func_001B4840(void *, int);
extern "C" void func_00253458(int);
extern "C" void func_001B48A0();
struct X { char d[0x16E0]; X(); void f(); ~X(); };
extern "C" int func_00140310() {
    char buf[0x100000];
    func_001D29F0();
    func_001B4840(buf, 0x100000);
    { X t; t.f(); func_00253458(1); }
    func_001B48A0();
    return 1;
}


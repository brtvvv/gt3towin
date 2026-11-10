// @flags -fexceptions
extern "C" void func_001D29F0();
extern "C" void func_001B4840(void *, int);
extern "C" void func_00253458(int);
extern "C" void func_001B48A0();
struct B { char p[0x288]; virtual ~B(); B(); };
struct MB { int x; ~MB(); };
struct MM { char d[0x54]; MM(); ~MM(); };
struct M1 : MB { MM mm; M1(); };
struct L;
struct M2 { char d[0xB5C]; M2(L *); };
struct L : B { int x28C, x290; M1 m1; M2 m2; L(int p) : x28C(p), m2(this) {} void run(); };
extern "C" int func_00173990(int p) {
    func_001D29F0();
    char buf[0x80000];
    func_001B4840(buf, 0x80000);
    { L l(p); l.run(); func_00253458(1); }
    func_001B48A0();
    return 1;
}


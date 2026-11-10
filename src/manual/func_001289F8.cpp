// @flags -fexceptions
extern "C" void func_001D29F0();
extern "C" void *func_0026D660(int, int);
extern "C" void func_001B4840(void *, int);
extern "C" void func_00253458(int);
extern "C" void func_001B48A0();
extern "C" void func_0026D5B8(void *);
struct B { char p[0x288]; virtual ~B(); B(); };
struct MB { int x; ~MB(); };
struct MM { char d[0x54]; MM(); ~MM(); };
struct M1 : MB { MM mm; M1(); };
struct L;
struct M2 { char d[0xB5C]; M2(L *); };
struct L : B { M1 m1; M2 m2; L() : m2(this) {} void run(void*); };
extern "C" void func_001289F8(void *p) {
    func_001D29F0();
    void *h = func_0026D660(0x40, 0x20000);
    func_001B4840(h, 0x20000);
    { L l; l.run(p); func_00253458(1); }
    func_001B48A0();
    func_0026D5B8(h);
    
}


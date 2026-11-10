// @flags -fexceptions
extern int D_003544B0, D_00354C68;
extern void *D_003544B8;
extern char D_00342EF0[], D_00342F00[], D_002F49E0[];
extern "C" int func_00286EE0(int);
extern "C" void *func_0026D5E0(int);
extern "C" void func_0022D298(void *, int);
extern "C" void func_0022D288(int);
extern "C" int func_002428C8(const char *, int, int, int, void *);
extern "C" void func_00269950(int);
extern "C" void func_0026AE48(int);
struct X { char d[0x20]; X(); void m(const char *, int); ~X(); };
extern "C" void func_0022C3B8() {
    func_00286EE0(D_003544B0);
    if (!D_003544B8) {
        D_003544B8 = func_0026D5E0(0x4000);
        func_0022D298(D_003544B8, 0x4000);
        X t;
        func_0022D288(0xAC000);
        t.m(D_00342EF0, 0);
        D_00354C68 = func_002428C8(D_00342F00, 0, 0, 1, D_002F49E0);
        func_00269950(D_00354C68);
    }
    func_0026AE48(D_003544B0);
}


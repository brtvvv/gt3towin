struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D30;
extern const char D_003154D0[];
extern "C" TI *func_0012A728(void) {
    if (!D_00354D30.v) func_0027D640(&D_00354D30, D_003154D0);
    return &D_00354D30;
}

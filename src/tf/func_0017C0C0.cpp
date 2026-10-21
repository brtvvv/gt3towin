struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D90;
extern const char D_003292C0[];
extern "C" TI *func_0017C0C0(void) {
    if (!D_00354D90.v) func_0027D640(&D_00354D90, D_003292C0);
    return &D_00354D90;
}

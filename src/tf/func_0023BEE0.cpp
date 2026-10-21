struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D18;
extern const char D_00344088[];
extern "C" TI *func_0023BEE0(void) {
    if (!D_00354D18.v) func_0027D640(&D_00354D18, D_00344088);
    return &D_00354D18;
}

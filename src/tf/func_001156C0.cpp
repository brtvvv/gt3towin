struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D00;
extern const char D_0030F060[];
extern "C" TI *func_001156C0(void) {
    if (!D_00354D00.v) func_0027D640(&D_00354D00, D_0030F060);
    return &D_00354D00;
}

struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E98;
extern const char D_00343660[];
extern "C" TI *func_002329D8(void) {
    if (!D_00354E98.v) func_0027D640(&D_00354E98, D_00343660);
    return &D_00354E98;
}

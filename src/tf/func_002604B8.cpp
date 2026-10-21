struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EF0;
extern const char D_00354AA8[];
extern "C" TI *func_002604B8(void) {
    if (!D_00354EF0.v) func_0027D640(&D_00354EF0, D_00354AA8);
    return &D_00354EF0;
}

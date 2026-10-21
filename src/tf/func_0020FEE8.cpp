struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E40;
extern const char D_00340F78[];
extern "C" TI *func_0020FEE8(void) {
    if (!D_00354E40.v) func_0027D640(&D_00354E40, D_00340F78);
    return &D_00354E40;
}

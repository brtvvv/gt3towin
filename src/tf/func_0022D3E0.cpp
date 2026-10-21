struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E70;
extern const char D_00342F28[];
extern "C" TI *func_0022D3E0(void) {
    if (!D_00354E70.v) func_0027D640(&D_00354E70, D_00342F28);
    return &D_00354E70;
}

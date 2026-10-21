struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E88;
extern const char D_00343360[];
extern "C" TI *func_002302E8(void) {
    if (!D_00354E88.v) func_0027D640(&D_00354E88, D_00343360);
    return &D_00354E88;
}

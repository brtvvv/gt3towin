struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E00;
extern const char D_003388A0[];
extern "C" TI *func_001CCCF8(void) {
    if (!D_00354E00.v) func_0027D640(&D_00354E00, D_003388A0);
    return &D_00354E00;
}

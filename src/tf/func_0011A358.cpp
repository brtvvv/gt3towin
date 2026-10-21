struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D00;
extern const char D_00310F58[];
extern "C" TI *func_0011A358(void) {
    if (!D_00354D00.v) func_0027D640(&D_00354D00, D_00310F58);
    return &D_00354D00;
}

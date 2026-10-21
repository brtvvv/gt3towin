struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354F00;
extern const char D_00348FF8[];
extern "C" TI *func_0026D2B8(void) {
    if (!D_00354F00.v) func_0027D640(&D_00354F00, D_00348FF8);
    return &D_00354F00;
}

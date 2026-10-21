struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EF8;
extern const char D_00347A18[];
extern "C" TI *func_0026C3C0(void) {
    if (!D_00354EF8.v) func_0027D640(&D_00354EF8, D_00347A18);
    return &D_00354EF8;
}

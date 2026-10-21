struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DA8;
extern const char D_00330100[];
extern "C" TI *func_001977D8(void) {
    if (!D_00354DA8.v) func_0027D640(&D_00354DA8, D_00330100);
    return &D_00354DA8;
}

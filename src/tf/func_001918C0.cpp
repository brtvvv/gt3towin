struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DA0;
extern const char D_0032F870[];
extern "C" TI *func_001918C0(void) {
    if (!D_00354DA0.v) func_0027D640(&D_00354DA0, D_0032F870);
    return &D_00354DA0;
}

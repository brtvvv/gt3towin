struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DE0;
extern const char D_003325E0[];
extern "C" TI *func_001AF740(void) {
    if (!D_00354DE0.v) func_0027D640(&D_00354DE0, D_003325E0);
    return &D_00354DE0;
}

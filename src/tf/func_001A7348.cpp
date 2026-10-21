struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DD0;
extern const char D_00332218[];
extern "C" TI *func_001A7348(void) {
    if (!D_00354DD0.v) func_0027D640(&D_00354DD0, D_00332218);
    return &D_00354DD0;
}

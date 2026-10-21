struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E50;
extern const char D_003426A0[];
extern "C" TI *func_00222318(void) {
    if (!D_00354E50.v) func_0027D640(&D_00354E50, D_003426A0);
    return &D_00354E50;
}

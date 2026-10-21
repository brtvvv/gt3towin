struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E38;
extern const char D_003409B0[];
extern "C" TI *func_0020B8D0(void) {
    if (!D_00354E38.v) func_0027D640(&D_00354E38, D_003409B0);
    return &D_00354E38;
}

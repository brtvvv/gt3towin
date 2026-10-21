struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DF8;
extern const char D_00336268[];
extern "C" TI *func_001C1060(void) {
    if (!D_00354DF8.v) func_0027D640(&D_00354DF8, D_00336268);
    return &D_00354DF8;
}

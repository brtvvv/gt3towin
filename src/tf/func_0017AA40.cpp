struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D80;
extern const char D_00328E08[];
extern "C" TI *func_0017AA40(void) {
    if (!D_00354D80.v) func_0027D640(&D_00354D80, D_00328E08);
    return &D_00354D80;
}

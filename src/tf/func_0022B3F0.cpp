struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D38;
extern const char D_00342DE0[];
extern "C" TI *func_0022B3F0(void) {
    if (!D_00354D38.v) func_0027D640(&D_00354D38, D_00342DE0);
    return &D_00354D38;
}

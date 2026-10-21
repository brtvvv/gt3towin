struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EB8;
extern const char D_00343EA8[];
extern "C" TI *func_0023A970(void) {
    if (!D_00354EB8.v) func_0027D640(&D_00354EB8, D_00343EA8);
    return &D_00354EB8;
}

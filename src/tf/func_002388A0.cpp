struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EA8;
extern const char D_00343C60[];
extern "C" TI *func_002388A0(void) {
    if (!D_00354EA8.v) func_0027D640(&D_00354EA8, D_00343C60);
    return &D_00354EA8;
}

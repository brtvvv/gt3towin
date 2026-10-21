struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E20;
extern const char D_0033F510[];
extern "C" TI *func_001F67D0(void) {
    if (!D_00354E20.v) func_0027D640(&D_00354E20, D_0033F510);
    return &D_00354E20;
}

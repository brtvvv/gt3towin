struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E28;
extern const char D_0033F538[];
extern "C" TI *func_001F6820(void) {
    if (!D_00354E28.v) func_0027D640(&D_00354E28, D_0033F538);
    return &D_00354E28;
}

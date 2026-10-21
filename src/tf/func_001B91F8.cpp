struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DF0;
extern const char D_00335218[];
extern "C" TI *func_001B91F8(void) {
    if (!D_00354DF0.v) func_0027D640(&D_00354DF0, D_00335218);
    return &D_00354DF0;
}

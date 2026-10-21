struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DC8;
extern const char D_00331910[];
extern "C" TI *func_001A3538(void) {
    if (!D_00354DC8.v) func_0027D640(&D_00354DC8, D_00331910);
    return &D_00354DC8;
}

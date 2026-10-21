struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E68;
extern const char D_00342DB0[];
extern "C" TI *func_0022B380(void) {
    if (!D_00354E68.v) func_0027D640(&D_00354E68, D_00342DB0);
    return &D_00354E68;
}

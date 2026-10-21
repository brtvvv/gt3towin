struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E58;
extern const char D_00342830[];
extern "C" TI *func_00222E48(void) {
    if (!D_00354E58.v) func_0027D640(&D_00354E58, D_00342830);
    return &D_00354E58;
}

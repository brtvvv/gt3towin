struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E10;
extern const char D_00338A18[];
extern "C" TI *func_001CD768(void) {
    if (!D_00354E10.v) func_0027D640(&D_00354E10, D_00338A18);
    return &D_00354E10;
}

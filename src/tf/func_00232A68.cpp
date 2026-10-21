struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EA0;
extern const char D_00343670[];
extern "C" TI *func_00232A68(void) {
    if (!D_00354EA0.v) func_0027D640(&D_00354EA0, D_00343670);
    return &D_00354EA0;
}

struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EE8;
extern const char D_00347338[];
extern "C" TI *func_0025EF00(void) {
    if (!D_00354EE8.v) func_0027D640(&D_00354EE8, D_00347338);
    return &D_00354EE8;
}

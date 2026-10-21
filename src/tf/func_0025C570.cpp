struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EE0;
extern const char D_00347160[];
extern "C" TI *func_0025C570(void) {
    if (!D_00354EE0.v) func_0027D640(&D_00354EE0, D_00347160);
    return &D_00354EE0;
}

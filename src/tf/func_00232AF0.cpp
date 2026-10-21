struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E90;
extern const char D_00343688[];
extern "C" TI *func_00232AF0(void) {
    if (!D_00354E90.v) func_0027D640(&D_00354E90, D_00343688);
    return &D_00354E90;
}

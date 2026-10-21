struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354ED0;
extern const char D_003455A8[];
extern "C" TI *func_002441A8(void) {
    if (!D_00354ED0.v) func_0027D640(&D_00354ED0, D_003455A8);
    return &D_00354ED0;
}

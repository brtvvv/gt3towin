struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D50;
extern const char D_0031ACD8[];
extern "C" TI *func_0013ED90(void) {
    if (!D_00354D50.v) func_0027D640(&D_00354D50, D_0031ACD8);
    return &D_00354D50;
}

struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D00;
extern const char D_00338480[];
extern "C" TI *func_001C80E8(void) {
    if (!D_00354D00.v) func_0027D640(&D_00354D00, D_00338480);
    return &D_00354D00;
}

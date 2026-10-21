struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D00;
extern const char D_00337EB8[];
extern "C" TI *func_001C6C08(void) {
    if (!D_00354D00.v) func_0027D640(&D_00354D00, D_00337EB8);
    return &D_00354D00;
}

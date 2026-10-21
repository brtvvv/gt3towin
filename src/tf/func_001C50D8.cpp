struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D00;
extern const char D_003375C8[];
extern "C" TI *func_001C50D8(void) {
    if (!D_00354D00.v) func_0027D640(&D_00354D00, D_003375C8);
    return &D_00354D00;
}

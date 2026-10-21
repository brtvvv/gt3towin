struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D00;
extern const char D_00315DD8[];
extern "C" TI *func_0012C778(void) {
    if (!D_00354D00.v) func_0027D640(&D_00354D00, D_00315DD8);
    return &D_00354D00;
}

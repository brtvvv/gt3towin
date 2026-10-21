struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D08;
extern const char D_00335D08[];
extern "C" TI *func_001BCB20(void) {
    if (!D_00354D08.v) func_0027D640(&D_00354D08, D_00335D08);
    return &D_00354D08;
}

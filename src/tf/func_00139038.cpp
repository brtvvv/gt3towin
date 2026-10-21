struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D30;
extern const char D_00319048[];
extern "C" TI *func_00139038(void) {
    if (!D_00354D30.v) func_0027D640(&D_00354D30, D_00319048);
    return &D_00354D30;
}

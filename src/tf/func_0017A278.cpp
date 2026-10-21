struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D78;
extern const char D_00328D38[];
extern "C" TI *func_0017A278(void) {
    if (!D_00354D78.v) func_0027D640(&D_00354D78, D_00328D38);
    return &D_00354D78;
}

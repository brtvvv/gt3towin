struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E30;
extern const char D_00340728[];
extern "C" TI *func_00207988(void) {
    if (!D_00354E30.v) func_0027D640(&D_00354E30, D_00340728);
    return &D_00354E30;
}

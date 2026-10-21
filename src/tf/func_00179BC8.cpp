struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D68;
extern const char D_00328CD0[];
extern "C" TI *func_00179BC8(void) {
    if (!D_00354D68.v) func_0027D640(&D_00354D68, D_00328CD0);
    return &D_00354D68;
}

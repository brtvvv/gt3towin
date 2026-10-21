struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D60;
extern const char D_00327848[];
extern "C" TI *func_00175710(void) {
    if (!D_00354D60.v) func_0027D640(&D_00354D60, D_00327848);
    return &D_00354D60;
}

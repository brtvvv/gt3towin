struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D70;
extern const char D_00328CC0[];
extern "C" TI *func_00179818(void) {
    if (!D_00354D70.v) func_0027D640(&D_00354D70, D_00328CC0);
    return &D_00354D70;
}

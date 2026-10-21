struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D20;
extern const char D_00309E28[];
extern "C" TI *func_00101B20(void) {
    if (!D_00354D20.v) func_0027D640(&D_00354D20, D_00309E28);
    return &D_00354D20;
}

struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E60;
extern const char D_00342C40[];
extern "C" TI *func_00226DD0(void) {
    if (!D_00354E60.v) func_0027D640(&D_00354E60, D_00342C40);
    return &D_00354E60;
}

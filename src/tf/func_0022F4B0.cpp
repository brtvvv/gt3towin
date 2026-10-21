struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E80;
extern const char D_003432D0[];
extern "C" TI *func_0022F4B0(void) {
    if (!D_00354E80.v) func_0027D640(&D_00354E80, D_003432D0);
    return &D_00354E80;
}

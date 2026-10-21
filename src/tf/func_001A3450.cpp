struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DC0;
extern const char D_003318C0[];
extern "C" TI *func_001A3450(void) {
    if (!D_00354DC0.v) func_0027D640(&D_00354DC0, D_003318C0);
    return &D_00354DC0;
}

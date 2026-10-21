struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DE8;
extern const char D_00333398[];
extern "C" TI *func_001B1DF0(void) {
    if (!D_00354DE8.v) func_0027D640(&D_00354DE8, D_00333398);
    return &D_00354DE8;
}

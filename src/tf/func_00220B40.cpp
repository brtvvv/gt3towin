struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E48;
extern const char D_00342638[];
extern "C" TI *func_00220B40(void) {
    if (!D_00354E48.v) func_0027D640(&D_00354E48, D_00342638);
    return &D_00354E48;
}

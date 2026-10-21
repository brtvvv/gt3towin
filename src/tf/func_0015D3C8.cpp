struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D58;
extern const char D_003221C8[];
extern "C" TI *func_0015D3C8(void) {
    if (!D_00354D58.v) func_0027D640(&D_00354D58, D_003221C8);
    return &D_00354D58;
}

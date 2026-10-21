struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DD8;
extern const char D_003324C0[];
extern "C" TI *func_001AC638(void) {
    if (!D_00354DD8.v) func_0027D640(&D_00354DD8, D_003324C0);
    return &D_00354DD8;
}

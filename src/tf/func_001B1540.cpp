struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354CF8;
extern const char D_00333258[];
extern "C" TI *func_001B1540(void) {
    if (!D_00354CF8.v) func_0027D640(&D_00354CF8, D_00333258);
    return &D_00354CF8;
}

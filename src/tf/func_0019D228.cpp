struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DB0;
extern const char D_00330B70[];
extern "C" TI *func_0019D228(void) {
    if (!D_00354DB0.v) func_0027D640(&D_00354DB0, D_00330B70);
    return &D_00354DB0;
}

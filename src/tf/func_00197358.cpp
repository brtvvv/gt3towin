struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354CF0;
extern const char D_00330090[];
extern "C" TI *func_00197358(void) {
    if (!D_00354CF0.v) func_0027D640(&D_00354CF0, D_00330090);
    return &D_00354CF0;
}

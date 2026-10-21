struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354CF0;
extern const char D_0032FED8[];
extern "C" TI *func_00196A50(void) {
    if (!D_00354CF0.v) func_0027D640(&D_00354CF0, D_0032FED8);
    return &D_00354CF0;
}

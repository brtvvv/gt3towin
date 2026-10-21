struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E18;
extern const char D_0033E4B8[];
extern "C" TI *func_001EE928(void) {
    if (!D_00354E18.v) func_0027D640(&D_00354E18, D_0033E4B8);
    return &D_00354E18;
}

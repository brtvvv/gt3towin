struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D48;
extern const char D_0032D0B8[];
extern "C" TI *func_00189E10(void) {
    if (!D_00354D48.v) func_0027D640(&D_00354D48, D_0032D0B8);
    return &D_00354D48;
}

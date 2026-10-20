struct S { int v; };
extern "C" void func_0027D640(S *, const char *);
extern S D_00354D88;
extern const char D_00329150[];
extern "C" S *func_0017BEA0(void) {
    if (!D_00354D88.v) func_0027D640(&D_00354D88, D_00329150);
    return &D_00354D88;
}

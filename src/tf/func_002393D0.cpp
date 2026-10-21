struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EB0;
extern const char D_00343D30[];
extern "C" TI *func_002393D0(void) {
    if (!D_00354EB0.v) func_0027D640(&D_00354EB0, D_00343D30);
    return &D_00354EB0;
}

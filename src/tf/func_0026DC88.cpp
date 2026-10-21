struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354F08;
extern const char D_003490D0[];
extern "C" TI *func_0026DC88(void) {
    if (!D_00354F08.v) func_0027D640(&D_00354F08, D_003490D0);
    return &D_00354F08;
}

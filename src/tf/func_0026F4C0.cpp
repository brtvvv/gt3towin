struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354F10;
extern const char D_00349100[];
extern "C" TI *func_0026F4C0(void) {
    if (!D_00354F10.v) func_0027D640(&D_00354F10, D_00349100);
    return &D_00354F10;
}

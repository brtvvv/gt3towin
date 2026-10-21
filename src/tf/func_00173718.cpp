struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D10;
extern const char D_003269A0[];
extern "C" TI *func_00173718(void) {
    if (!D_00354D10.v) func_0027D640(&D_00354D10, D_003269A0);
    return &D_00354D10;
}

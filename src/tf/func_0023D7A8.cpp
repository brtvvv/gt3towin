struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EC0;
extern const char D_00345470[];
extern "C" TI *func_0023D7A8(void) {
    if (!D_00354EC0.v) func_0027D640(&D_00354EC0, D_00345470);
    return &D_00354EC0;
}

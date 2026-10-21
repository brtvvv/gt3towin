struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354EC8;
extern const char D_00345458[];
extern "C" TI *func_0023D728(void) {
    if (!D_00354EC8.v) func_0027D640(&D_00354EC8, D_00345458);
    return &D_00354EC8;
}

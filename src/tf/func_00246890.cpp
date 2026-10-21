struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354ED8;
extern const char D_00345608[];
extern "C" TI *func_00246890(void) {
    if (!D_00354ED8.v) func_0027D640(&D_00354ED8, D_00345608);
    return &D_00354ED8;
}

struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354DB8;
extern const char D_00331798[];
extern "C" TI *func_001A0758(void) {
    if (!D_00354DB8.v) func_0027D640(&D_00354DB8, D_00331798);
    return &D_00354DB8;
}

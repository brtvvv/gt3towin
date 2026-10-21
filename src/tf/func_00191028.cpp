struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D98;
extern const char D_0032F688[];
extern "C" TI *func_00191028(void) {
    if (!D_00354D98.v) func_0027D640(&D_00354D98, D_0032F688);
    return &D_00354D98;
}

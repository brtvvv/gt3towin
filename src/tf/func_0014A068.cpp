struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D58;
extern const char D_0031DE80[];
extern "C" TI *func_0014A068(void) {
    if (!D_00354D58.v) func_0027D640(&D_00354D58, D_0031DE80);
    return &D_00354D58;
}

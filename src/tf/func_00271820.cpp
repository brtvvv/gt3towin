struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354D28;
extern const char D_00349140[];
extern "C" TI *func_00271820(void) {
    if (!D_00354D28.v) func_0027D640(&D_00354D28, D_00349140);
    return &D_00354D28;
}

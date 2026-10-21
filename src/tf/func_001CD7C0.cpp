struct TI { int v; };
extern "C" void func_0027D640(TI *, const char *);
extern TI D_00354E08;
extern const char D_00338A38[];
extern "C" TI *func_001CD7C0(void) {
    if (!D_00354E08.v) func_0027D640(&D_00354E08, D_00338A38);
    return &D_00354E08;
}

struct TI { int v; };
extern "C" void func_0027D620(TI *, const char *, TI *);
extern "C" TI *func_0027DC18(void);
extern TI D_4B45D0 __attribute__((section(".data")));
extern const char D_00349FC8[];
extern TI D_00354F20 __attribute__((section(".data")));
extern "C" TI *func_0027E7A8(void) {
    if (!D_4B45D0.v) { func_0027DC18(); func_0027D620(&D_4B45D0, D_00349FC8, &D_00354F20); }
    return &D_4B45D0;
}

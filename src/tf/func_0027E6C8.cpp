struct TI { int v; };
extern "C" void func_0027D620(TI *, const char *, TI *);
extern "C" TI *func_0027DC18(void);
extern TI D_4B45E0 __attribute__((section(".data")));
extern const char D_00349F98[];
extern TI D_00354F20 __attribute__((section(".data")));
extern "C" TI *func_0027E6C8(void) {
    if (!D_4B45E0.v) { func_0027DC18(); func_0027D620(&D_4B45E0, D_00349F98, &D_00354F20); }
    return &D_4B45E0;
}

struct TI { int v; };
extern "C" void func_0027D620(TI *, const char *, TI *);
extern "C" TI *func_0027DA38(void);
extern TI D_4B45A0 __attribute__((section(".data")));
extern const char D_00349E18[];
extern TI D_004B4580 __attribute__((section(".data")));
extern "C" TI *func_0027D920(void) {
    if (!D_4B45A0.v) { func_0027DA38(); func_0027D620(&D_4B45A0, D_00349E18, &D_004B4580); }
    return &D_4B45A0;
}

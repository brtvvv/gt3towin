extern "C" void func_0023BFF8(char *, int);
extern "C" void func_00218E68(char *s, int x, int sel) {
    char *a = sel ? s + 0xD8 : s + 0x308;
    char **b = (char **)(sel ? s + 0x540 : s + 0x544);
    int *c = (int *)(sel ? s + 0xD0 : s + 0xD4);
    func_0023BFF8(a, x);
    *b = a;
    *c = 0;
}


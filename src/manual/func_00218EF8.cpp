extern "C" int func_0023C140(char *, int);
extern "C" int func_00218EF8(char *s, int x, int sel) {
    char *a = sel ? s + 0xD8 : s + 0x308;
    char **b = (char **)(sel ? s + 0x540 : s + 0x544);
    int *c = (int *)(sel ? s + 0xD0 : s + 0xD4);
    int r = func_0023C140(a, x);
    *b = a;
    *c = 2;
    return r;
}


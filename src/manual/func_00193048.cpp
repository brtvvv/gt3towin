extern "C" void func_00193098(char *, int);
extern "C" void func_00193048(char *s, int c) {
    if (*(signed char *)(s + 0xA46A) != c) {
        *(char *)(s + 0xA46A) = c;
        func_00193098(s, (*(int **)(*(char **)(*(char **)(s + 0x18) + 0x18) + 8))[c]);
    }
}


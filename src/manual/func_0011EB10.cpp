extern "C" char *func_00219680(); extern "C" int func_001C5450(); extern "C" char *func_001C5358(int, int);
extern "C" void func_0011EB10(int a, char *d) { int k = (*(int **)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x538))[0x1C / 4]; char *s = func_001C5358(func_001C5450(), k); if (*s == '-') __builtin_strcpy(d, " "); else __builtin_strcpy(d, s); }



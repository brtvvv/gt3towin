extern "C" char *func_00219680(); extern "C" unsigned func_00235400(char *); extern "C" int func_00238C40(char *); extern "C" void func_0023C8E8(char *, int);
extern "C" void func_0011CD80(int a, char *b) { char *p = (*(char **)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x538)) + 0x10; if (func_00235400(p) & 1) __builtin_strcpy(b, "----"); else func_0023C8E8(b, func_00238C40(p)); }


extern "C" char *func_00219680(); extern "C" int func_00235400(char *); extern "C" int func_00238C40(char *); extern "C" void func_0023C8E8(char *, long);
extern "C" void func_0011CE10(int a, char *b) { char *x = *(char **)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x538) + 0x10; if ((func_00235400(x) >> 1) & 1) { __builtin_strcpy(b, "----"); return; } func_0023C8E8(b, func_00238C40(x) / 4); }


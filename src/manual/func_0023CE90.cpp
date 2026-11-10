extern char D_003548D8[], D_003548E0[];
extern "C" int func_0026ACA0(char *); extern "C" char *func_0027FDBC(char *, char *); extern "C" int func_0026D950(char *, char *, ...);
extern "C" void func_0023CE90(char *out, char *path, int x) { int n = func_0026ACA0(path); char dir[0x80]; char nm[0x80]; func_0027FDBC(dir, path); int i; for (i = n - 1; i >= 0; i--) if (dir[i] == '/') break; if (i >= 0) { func_0027FDBC(nm, path + i); dir[i + 1] = 0; func_0026D950(out, D_003548D8, dir, x, nm + 1); } else func_0026D950(out, D_003548E0, x, path); }


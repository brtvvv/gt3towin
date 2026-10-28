extern int D_00354938[];
extern "C" void func_0027F9CC(char *, char *), func_0026B0B0(int, int, int), func_0026B108(int);
extern "C" int func_0026AFB8(char *, int);
extern "C" int func_00243018(char *name, int a, int b) { int path[0x20]; path[0] = D_00354938[0]; ((unsigned short *)path)[2] = ((unsigned short *)D_00354938)[2]; func_0027F9CC((char *)path, name); int fd = func_0026AFB8((char *)path, 0x602); if (fd < 0) return 0; func_0026B0B0(fd, a, b); func_0026B108(fd); return 1; }

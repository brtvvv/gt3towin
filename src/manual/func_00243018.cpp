extern "C" void func_0027F9CC(char *, const char *); extern "C" int func_0026AFB8(char *, int); extern "C" void func_0026B0B0(int, void *, int); extern "C" void func_0026B108(int);
extern "C" int func_00243018(const char *n, void *d, int len) { char b[0x80]; __builtin_strcpy(b, "host:"); func_0027F9CC(b, n); int fd = func_0026AFB8(b, 0x602); if (fd < 0) return 0; func_0026B0B0(fd, d, len); func_0026B108(fd); return 1; }


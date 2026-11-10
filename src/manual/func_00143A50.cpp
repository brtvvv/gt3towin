extern "C" char *func_0027FDBC(char *, const char *); extern "C" int func_00240AC8(int, char *, char *, int, int); extern "C" int func_00241AB8(int);
extern "C" int func_00143A50(char *t, int h) { char path[0x30]; char st[0x40]; path[0] = '/'; func_0027FDBC(path + 1, t + 0x34); if (func_00240AC8(h, path, st, 0, 1)) return -1; return func_00241AB8(h); }


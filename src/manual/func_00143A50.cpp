extern "C" char *func_0027FDBC(char *, const char *);
extern "C" int func_00240AC8(void *, char *, char *, int, int);
extern "C" int func_00241AB8(void *);
extern "C" int func_00143A50(char *s, void *h) { char buf[0x30]; char out[0x40]; buf[0] = '/'; func_0027FDBC(buf + 1, s + 0x34); if (func_00240AC8(h, buf, out, 0, 1)) return -1; return func_00241AB8(h); }


extern char D_004B2B00[];
extern "C" int func_0028DC98(); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int); extern "C" int func_0028DD98(); extern "C" char *func_00280088(char *, char *, int);
extern char D_004B2908[];
extern "C" int func_0028E310(char *a, char *b, int *out, int cmd) { if (func_0028DC98() < 0) return 0xFFFF0000; if (func_0028DD98()) return 0xFFFEFFFC; char *d = D_004B2908; int *s = (int *)(d - 8); func_00280088(d, a, 0xFC); ((char *)s)[0x103] = 0; func_00280088(d + 0xFC, b, 0xFC); ((char *)s)[0x1FF] = 0; if (func_00289DA8(D_004B2B00, cmd, 0, s, 0x200, s, 0x10, 0, 0) < 0) return 0xFFFEFFFF; int r = *(int *)(d - 8); if (!r) return 0xFFFEFFFD; out[0] = r; out[1] = s[1]; return 0; }


extern char D_00342368[];
extern "C" void func_0027EBC8(char *, char *, int); extern "C" void func_0027ED70(char *, int, int); extern "C" void func_0021D240(char *); extern "C" unsigned func_0021C310(char *, int); extern "C" void func_0021CEA8(char *, int, int, int); extern "C" unsigned func_0026DCC8(char *, int); extern "C" void func_0021D3C0(char *, char *, char *, char *, int); extern "C" void func_0021DE98(char **, char *, int);
extern "C" char *func_0021C408(char *t, char *k, int a) { char *p[4]; char b[0xE0]; char *d = t + 1; char *s = k + 1; func_0027EBC8(d, s, 10); char *key = t + 0xD; func_0027ED70(t + 0xB, 0, 2); func_0021D240(key); func_0027ED70(d, 0, 12); func_0027EBC8(t + 3, s, 10);
 unsigned x = func_0021C310(key, a); x ^= x >> 16; x ^= x >> 8; x ^= x >> 4; func_0021CEA8(d, 0, x & 0xF, 4); unsigned v = func_0026DCC8(d, 12); func_0021CEA8(d, 4, (v ^ v >> 12 ^ v >> 24) & 0xFFF, 12);
 func_0021D3C0(b, key, D_00342368, D_00342368 + 8, 13); p[0] = key; p[1] = b; func_0021DE98(p, d, 12); return t; }


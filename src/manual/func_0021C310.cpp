struct C { int x0; unsigned char d[16]; char p[0xC]; };
extern "C" void func_0021C040(C *, int); extern "C" int func_0022CB88(); extern "C" void func_0021C1B8(C *, void *, int); extern "C" int func_0026ACA0(char *); extern "C" void func_0021C2C0(C *);
extern "C" unsigned func_0021C310(int a, char *s) { C c; int v; func_0021C040(&c, a); v = func_0022CB88(); func_0021C1B8(&c, &v, 4); if (s) func_0021C1B8(&c, s, func_0026ACA0(s)); func_0021C2C0(&c); 
 return ((c.d[0] ^ c.d[8]) ^ (c.d[12] ^ c.d[4])) | ((c.d[2] ^ c.d[10]) ^ (c.d[14] ^ c.d[6])) << 16 | (((c.d[3] ^ c.d[11]) ^ (c.d[15] ^ c.d[7])) << 24 | ((c.d[1] ^ c.d[9]) ^ (c.d[13] ^ c.d[5])) << 8); }


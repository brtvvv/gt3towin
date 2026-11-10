struct K { signed char x0; int x4; char p[8]; };
extern char D_00319DD0[];
extern "C" int func_001B7478(char *, char *); extern "C" void func_00139500(K *, int); extern "C" void func_00139648(K *, char *); extern "C" void func_0022AE28(char *, char *, int, int, int);
extern "C" void func_0013A528(char *t) { func_001B7478(t + 0x28C, D_00319DD0); K k; k.x0 = -1; k.x4 = 0; func_00139500(&k, *(int *)(t + 0xE7C)); char buf[0x80]; func_00139648(&k, buf); func_0022AE28(t + 0xDE8, buf, 0, 0, 0); }


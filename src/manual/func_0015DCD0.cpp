extern char D_003132A0[], D_003132B0[], D_003132D0[];
extern "C" void func_002389D8(char *, int); extern "C" void func_0023D140(char *, int); extern "C" void func_001C07B8(char *, int); extern "C" void func_00101AB0(char *, int); extern "C" void func_001CC978(char *, int);
extern "C" void func_0015DCD0(char *t, int a) { char *s = t + 0xE40; char *q = t + 0x28C; *(char **)(s + 0x1EC) = D_003132A0; *(char **)(s + 8) = D_003132B0; func_002389D8(t + 0xE50, 0); *(char **)(s + 8) = D_003132D0; func_0023D140(s, 2); func_001C07B8(t + 0x290, 2); func_00101AB0(q, 2); func_001CC978(t, a); }


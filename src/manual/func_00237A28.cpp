struct R { char p[0x28]; unsigned char b; };
struct S { char p[0xF0]; int o[8]; char q[4]; int k; };
extern "C" R *func_002359F8(S *);
extern "C" void func_00233638(S *, char *), func_001E37D8(char *, int, short *, int);
extern "C" void func_00237A28(S *s) { short out[8]; char buf[0x3F0]; if (!func_002359F8(s)->b) return; func_00233638(s, buf); func_001E37D8(buf, s->k * 10, out, 1); for (int i = 0; i < 8; i++) s->o[i] = out[i]; }

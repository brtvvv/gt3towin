struct R { char p[0x18]; long x18; };
extern "C" char *func_00219680(); extern "C" char *func_00219F60(char *); extern "C" void func_0023C190(char *, int *, int *); extern "C" void func_00238A88(char *, int); extern "C" int func_00238C98(char *, int); extern "C" void func_00236D78(char *, int);
extern "C" void func_001269C0(char *t) { char *g = func_00219F60(func_00219680()); int st[2]; func_0023C190(g, &st[0], &st[1]); g += 0x10; *(int *)(t + 0xE50) = st[0]; int y = *(int *)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x5D8); func_00238A88(g, y); R *r = (R *)func_00219680(); r->x18 += -func_00238C98(g, y); func_00236D78(g, y); }


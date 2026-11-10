struct S { char p[0x114]; int x114, x118; };
extern int D_00354CEC; extern S D_004ACB40[]; extern "C" void func_00287DD8(int);
extern "C" int func_00270170() { S *s = D_004ACB40; if (++D_00354CEC >= 0xB5 && s->x114 != -1) { s->x118 = 1; func_00287DD8(s->x114); s->x114 = -1; D_00354CEC = 0; } __asm__ volatile("sync"); __asm__ volatile("ei"); return 0; }


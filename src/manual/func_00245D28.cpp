extern "C" void func_00251CC8(int); extern "C" void func_00251E00(int, int, int, int); extern "C" void func_00251E50(int, int, int, int);
extern "C" void func_00245D28(int *t) { if (t[0x28 / 4]) { if (t[0x30 / 4]) func_00251E00(t[6], t[7], t[8], t[9]); else func_00251E00(0, 0, t[2], t[3]); func_00251E50(t[0], t[1], t[2], t[3]); } else func_00251CC8(0); }


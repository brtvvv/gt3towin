extern long D_004A83D8[];
extern "C" void func_00251CC8(unsigned char a) {
    if (a) { if (a == 1) *(volatile long *)0x12000000 = D_004A83D8[0] | 2; }
    else *(volatile long *)0x12000000 = D_004A83D8[0] & ~2L;
}


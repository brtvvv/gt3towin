extern "C" void func_00251430() {
    *(volatile long *)0x12001000 = 8;
    int n = 240000;
    do { if (*(volatile long *)0x12001000 & 8) break; } while (--n);
    *(volatile long *)0x12001000 = 8;
}


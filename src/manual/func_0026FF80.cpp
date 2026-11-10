struct T { char pad[0x114]; int h; };
extern T D_004ACB40[];
extern "C" void func_00286DD0(int);
extern "C" void func_0026FF80() {
    int h = D_004ACB40[0].h;
    if (h != -1) { func_00286DD0(h); D_004ACB40[0].h = -1; }
}


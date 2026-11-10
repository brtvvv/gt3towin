extern int D_00354B18, D_00354B14; extern "C" int func_00286F00(int); extern "C" void func_00286ED0(int);
extern "C" int func_00266A40() { if (D_00354B18 == func_00286F00(D_00354B18)) { func_00286ED0(D_00354B18); func_00286ED0(D_00354B14); } __asm__ volatile("sync"); __asm__ volatile("ei"); return 0; }


extern "C" void func_0028E8E0(); extern "C" void func_0028E928(); extern "C" int func_00286C10(int);
extern "C" int func_00287998(int a) { int s; __asm__ volatile("mfc0 %0, $12" : "=r"(s)); s &= 0x10000; if (s) func_0028E8E0(); int r = func_00286C10(a); __asm__ volatile("sync"); if (s) func_0028E928(); return r; }


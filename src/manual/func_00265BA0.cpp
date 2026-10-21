struct E { int a, b; }; extern E D_003007D0[] __attribute__((section(".data"))); extern "C" int func_00265BA0(int i, int a, int b) { D_003007D0[i].b = b; D_003007D0[i].a = a; return a; }

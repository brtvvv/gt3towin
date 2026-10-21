struct E { int a, b, c; }; extern E D_002F5260[16]; extern "C" void func_00243C08(void) { int i = 15; E *p = D_002F5260; while (i != -1) { p->a = 0; p->b = 0; p->c = 0; p++; i--; } }

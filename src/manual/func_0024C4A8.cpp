struct G { char pad[0xE0]; char *p; }; extern G D_002F8900; extern "C" int func_0024C4A8(int c) { *D_002F8900.p = c; D_002F8900.p++; return 0; }

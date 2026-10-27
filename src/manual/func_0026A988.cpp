extern unsigned short D_00347780[];
extern "C" void func_0026A988(short *o, int v, int pan) { int l = v * D_00347780[0x7F - pan]; int r = v * D_00347780[pan]; o[0] = l >> 14; o[1] = r >> 14; }


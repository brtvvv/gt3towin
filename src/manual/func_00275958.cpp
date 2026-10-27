extern "C" int func_00275898(); extern "C" void func_00286F50(unsigned *); extern unsigned char D_00307522[];
extern "C" int func_00275958() { if (func_00275898()) return D_00307522[0]; unsigned buf[4]; func_00286F50(buf); return (buf[0] >> 1) & 3; }


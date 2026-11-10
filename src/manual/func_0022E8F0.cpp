extern char D_00343168[], D_002EAF40[], D_002EB320[], D_004A0700[], D_004A0B00[];
extern int D_00354630, D_00354634, D_00354668, D_00354664, D_0035466C, D_00354660, D_0035465C, D_0035464C, D_0035463C;
extern "C" int func_00286EA0(char *); extern "C" char *func_0027ED70(char *, int, int); extern "C" void func_0022DCB8(); extern "C" int func_0026D660(int, int); extern "C" void func_0026AE68(void *, int, int, int, int); extern "C" void func_0022E9C8();
extern "C" void func_0022E8F0() { D_00354630 = func_00286EA0(D_00343168); D_00354634 = func_00286EA0(D_00343168); func_0027ED70(D_002EAF40, 0, 0x3E0); func_0027ED70(D_002EB320, 0, 0x7C); func_0027ED70(D_004A0700, 0, 0x400); func_0027ED70(D_004A0B00, 0, 0x7C); D_00354668 = 0; D_00354664 = 1; D_0035466C = 1; D_00354660 = 0; D_0035465C = 0; D_0035464C = 0; func_0022DCB8(); D_0035463C = 0; int p = func_0026D660(0x10, 0x1000); func_0026AE68((void *)func_0022E9C8, p, 4, p, 0x1000); }


struct S { char p[0x18]; int k; };
extern char D_002F2F98[];
extern "C" void func_0023E668(char *), func_001995E0(S *), func_00199638(S *), func_001996A8(S *);
extern "C" void func_00199560(S *s) { func_0023E668(D_002F2F98); int k = s->k; if (k < 0x40) { func_001995E0(s); return; } switch (k) { case 0x40: func_00199638(s); break; case 0x41: func_001996A8(s); break; } }

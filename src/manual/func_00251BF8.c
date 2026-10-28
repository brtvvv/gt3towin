extern unsigned char D_004A8380[];
void func_00251C60(int, int, int), func_00251D18(unsigned char *), func_00251CA8(void);
void func_00251BF8(int a, int b, int c) { unsigned char *s = D_004A8380; if (s[0x99] == a && s[0x9A] == b && s[0x9B] == c) return; func_00251C60(a, b, c); func_00251D18(s); func_00251CA8(); }


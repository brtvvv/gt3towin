// @__1T 0x1819C0
extern char D_00329C18[];
struct Bs { Bs(); virtual ~Bs(); };
struct T : Bs { char p[0xC87C]; int a, b, c; void init(char *); T(); };
T::T() { c = 0; a = 0; b = 0; init(D_00329C18); }

struct S { char p[0x448]; float x448; char q[0x4B0 - 0x44C]; float x4B0, x4B4; char r[0x4DC - 0x4B8]; char x4DC; char s[0x536 - 0x4DD]; unsigned short x536; };
struct T { char p[0xF84]; S s; };
extern "C" int func_001EBA28(T *); extern "C" void func_001DEF00(T *); extern "C" void func_001EDF40(T *); extern "C" void func_001DC028(T *); extern "C" float func_001E1AF0(char *, char *, float); extern "C" float func_001E1B58(char *, char *, float); extern "C" void func_001EB128(T *); extern "C" void func_001EB318(T *);
extern "C" void func_001EB368(T *t) { S *s = &t->s; s->x4DC = func_001EBA28(t) != 0; if (s->x536) s->x536--; func_001DEF00(t); char *a = (char *)t + 0x148; char *b = (char *)t + 0x137C; func_001EDF40(t); func_001DC028(t); s->x4B0 = func_001E1AF0(a, b, s->x448); s->x4B4 = func_001E1B58(a, b, s->x448); func_001EB128(t); func_001EB318(t); }


struct T { char p[0x18]; float x18; char q[0x140C - 0x1C]; float x140C; };
extern float D_00351F10;
extern "C" float func_001ECE40(int a, T *t, float x, float y) { float r = 0.0f; float w = t->x140C, h = t->x18; if (D_00351F10 < w && x < 0.0f && -w < x && -h < y && y < h) r = (w + x) / w; return r; }


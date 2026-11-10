struct R { float x0, x4; };
struct T { char p[0x18]; float x18, x1C; char q[8]; R *x28; };
extern "C" float func_001A4FD8(T *t) { float w = t->x18; float fb = t->x28->x4 / w; float fa = t->x1C / w; int a = (int)fa; int b = (int)fb; int r = a - 1; r -= b; return w * (float)r; }


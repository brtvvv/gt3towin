extern "C" {

typedef struct T T;
struct T
{
  char p[0x100];
  float x100;
  float x104;
  float x108;
  float x10C;
};
void func_001CD048(T *t, float *o, int w, int h)
{
  int r;
  r = 1;
  if (r < w)
  {
    do
    {
      r <<= 1;
    }
    while ((r < 0x401) && (r < w));
  }
  float sx = ((float) w) / r;
  r = 1;
  if (r < h)
  {
    do
    {
      r <<= 1;
    }
    while ((r < 0x401) && (r < h));
  }
  float u = t->x100;
  float sy = ((float) h) / r;
  o[0] = sx * u;
  o[1] = sy * t->x104;
  o[2] = sx * (t->x100 + t->x108);
  o[3] = sy * t->x104;
  o[4] = sx * t->x100;
  o[5] = sy * (t->x104 + t->x10C);
  o[6] = sx * (t->x100 + t->x108);
  o[7] = sy * (t->x104 + t->x10C);
}
}

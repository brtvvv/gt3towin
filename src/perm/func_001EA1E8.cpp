extern "C" {

typedef struct T T;
struct T
{
  char p[0x28];
  float x28;
  float x2C;
  char q[0xE14 - 0x30];
  float xE14[2];
};
float func_0026B200(float, float);
float func_0026B3D8(float);
float func_001EA1E8(T *t, int i, float u, float x)
{
  float a = t->xE14[i >> 1];
  float r;
  int new_var;
  int h = i >> 1;
  if (h == 0)
  {
    r = t->x28;
  }
  else
  {
    r = t->x2C;
  }
  if (a != 0.0f)
  {
    r -= (1.0f - func_0026B3D8(func_0026B200(x, a))) * a;
  }
  new_var = i & 1;
  if (!new_var)
  {
    r = -r;
  }
  return r;
}
}

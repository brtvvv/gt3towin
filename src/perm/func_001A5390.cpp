extern "C" {

typedef struct E E;
typedef struct T T;
struct E
{
  char d[0x20];
};
struct T
{
  char p[0x18];
  float x18;
  char q[0x34 - 0x1C];
  unsigned n;
  E *e;
};
int func_001A5338(E *, float, float, int);
int func_001A5390(T *t, float x, float y, int a)
{
  unsigned long long new_var;
  E *e;
  int new_var2;
  float *new_var3;
  unsigned i;
  if (!(x < 0.0f))
  {
    if (y < x)
    {
      return 0;
    }
    new_var = (i = 0);
    for (new_var, e = t->e; i < t->n; i++, e++)
    {
      new_var3 = &y;
      if (func_001A5338(e, x, *new_var3, a))
      {
        return 1;
      }
    }

    float h = t->x18;
    if (h < y)
    {
      y -= h;
      for (i = 0, e = t->e; i < t->n; i++, e++)
      {
        new_var2 = func_001A5338(e, 0.0f, y, a);
        if (new_var2)
        {
          return 1;
        }
      }

    }
  }
  return 0;
}
}

extern "C" {

typedef struct R R;
typedef struct T T;
struct R
{
  int x0;
  R *x4;
  char p[0xE];
  unsigned short x16;
  char q[0x14];
  int **x2C;
};
struct T
{
  char p[0x24];
  R *x24;
  char q[4];
  int x2C;
};
void func_00225680(R *);
int func_0024A7B8(int *);
void func_0021FB10(T *t, R *r, int f)
{
  t->x24 = r;
  if (f)
  {
    func_00225680(r);
  }
  if (t->x24 != t->x24->x4)
  {
    return;
  }
  if (!t->x24->x2C)
  {
    return;
  }
  if (!(*t->x24->x2C))
  {
    return;
  }
  int m = 0;
  for (int i = 0; i < t->x24->x16; i++)
  {
    int v;
 dummy_label_389184: ;
    v = func_0024A7B8(t->x24->x2C[i]);
    if (m < v)
    {
      m = v;
    }
  }

  t->x2C = m;
}
}

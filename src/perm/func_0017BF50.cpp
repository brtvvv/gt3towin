extern "C" {

typedef struct T T;
struct T
{
  int x0;
  int x4;
  int x8;
  int xC;
  int x10;
  int a[1000];
};
unsigned char func_0027EC74(int *, int *, int);
void func_0017BF50(T *t, int v)
{
  t->x4++;
  if (t->x0)
  {
    return;
  }
  t->x10 += v;
  int n = t->xC;
  if (n == 1000)
  {
    t->x8++;
    func_0027EC74(t->a, t->a + 1, 0xF9C);
    n = (t->xC = t->xC - 1);
  }
  if (t)
  {
    t->a[n] = v;
    t->xC = n + 1;
  }
  else
  {
    t->a[n] = v;
    t->xC = n + 1;
  }
}
}

extern "C" {

typedef struct S S;
struct S
{
  char p[0x7B68];
  int x7B68;
  char q[0x7BA4 - 0x7B6C];
  int x7BA4;
  int p7BA8;
  int x7BAC;
};
int func_00149710(char *, int, int);
int func_00149660(char *t)
{
  int i = ((S *) (t + 0x8000))->x7BAC;
  if (i < ((S *) (t + 0x8000))->x7B68)
  {
    for (; i < ((S *) (t + 0x8000))->x7B68; i++)
    {
      S *s = (S *) (t + 0x8000);
      int r = func_00149710(t, ((S *) (t + 0x8000))->x7BA4 - i, 0);
      if (r != 1)
      {
        return r;
      }
      r = func_00149710(t, (s->x7BA4 + i) + 1, 0);
      if (r != 1)
      {
        return r;
      }
    }

  }
  return 1;
}
}

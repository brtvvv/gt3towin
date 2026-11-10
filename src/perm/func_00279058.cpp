extern "C" {

char *func_00278FD0(int, int, int);
void func_0027EBC8(char *, char *, int);
void func_00279058(int a, int b, int c)
{
  char *s = func_00278FD0(a, b, 0);
  char *d = func_00278FD0(a, c, 0);
  int n;
  if (!(a < 31))
  {
    n = 8;
    if (a <= 63)
    {
      n = 4;
    }
  }
  else
  {
    n = 16;
  }
  func_0027EBC8(d, s, n);
}
}

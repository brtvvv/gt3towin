extern "C" {

void func_0026DBE8(int, long, int);
void func_001F5758(int s, unsigned n)
{
  unsigned long v = n;
  unsigned long new_var;
  if (n)
  {
    v = n - 1;
  }
  new_var = (unsigned long) 1;
  int b = 0;
  if (v)
  {
    do
    {
      v -= new_var << b;
      b++;
    }
    while (v >= (new_var << b));
  }
  func_0026DBE8(s, -1, b);
  func_0026DBE8(s, 0, 1);
  func_0026DBE8(s, v, b);
}
}

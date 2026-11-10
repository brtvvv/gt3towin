extern "C" {

typedef struct T T;
struct T
{
  int x0;
  int x4;
  char x8[0x50];
  int x58;
};
int func_001F5C78(char *);
void func_001F5F38(T *, int);
int func_001F64A8(T *t)
{
  int r = 4;
  switch (t->x4)
  {
    case 0:
      r = func_001F5C78(t->x8) + 4;
      break;
      break;

    case 1:
      for (int i = 0; i < t->x58; i++)
    {
      func_001F5F38(t, i);
      r += 0x1B00;
      r += func_001F5C78(t->x8);
    }

      return r;

    case 2:
      r = func_001F5C78(t->x8) + 0x1B04;

    default:
      return r;

  }

  return r;
}
}

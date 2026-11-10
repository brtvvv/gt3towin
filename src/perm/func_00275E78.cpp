extern "C" {

typedef struct M M;
typedef struct D D;
struct M
{
  unsigned char d[12];
};
struct D
{
  char p[5];
  unsigned char x5;
  unsigned char x6;
  unsigned char x7;
};
extern M D_003495A8;
extern char D_00349570[];
extern char D_00349598[];
void func_0027E9F8(char *, int, char *);
void func_00275E78(D *d)
{
  M t = D_003495A8;
  D *new_var;
  if (!d)
  {
    func_0027E9F8(D_00349570, 0x168, D_00349598);
  }
  d->x5--;
  new_var = d;
  if (!(new_var->x7 & 3))
  {
    t.d[1] = 29;
  }
  if (!d->x5)
  {
    if (!(--d->x6))
    {
      if (d->x7)
      {
        new_var->x7--;
      }
      else
      {
        d->x7 = 99;
      }
      d->x6 = 12;
    }
    new_var->x5 = t.d[new_var->x6 - 1];
  }
}
}

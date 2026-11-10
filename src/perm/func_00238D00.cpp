extern "C" {

char *func_00232658(char *, unsigned, long);
int func_00232700(char *);
int func_00238D00(char *t, unsigned k, long id)
{
  int r = -1;
  char *b = t + 0x1D0;
  if (!func_00232658(b, k, id))
  {
    return -1;
  }
  switch (k)
  {
    case 2:
      r = *((int *) (func_00232658(b, k, id) + 0x3C));
      break;

    case 12:

    case 13:
      r = *((int *) (func_00232658(b, k, id) + 0x24));
      break;

    case 18:
      r = *((int *) (func_00232658(b, k, id) + 0x7C));
      break;

    case 1:

    case 8:

    case 11:

    case 14:

    case 15:

    case 16:

    case 22:
      r = *((int *) (func_00232658(b, k, id) + 0x1C));
      break;

    case 17:

    case 21:

    case 23:
      r = *((int *) (func_00232658(b, k, id) + 0x2C));
      break;

    case 24:
      r = *((int *) (func_00232658(b, k, id) + 0x8));
      break;

    case 0:

    case 4:

    case 5:

    case 7:

    case 9:

    case 10:

    case 19:

    case 20:

    case 27:

    case 28:
      r = *((int *) (func_00232658(b, k, id) + 0x14));
      break;

    case 3:

    case 6:

    case 25:

    case 26:
      break;

  }

  if (func_00232700(b))
  {
 do { r *= 100; } while (0);
  }
  return r;
}
}

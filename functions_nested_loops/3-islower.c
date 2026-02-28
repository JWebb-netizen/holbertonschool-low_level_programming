#include "_putchar.c"

int _islower(int c)
{
  if(c >= 0x61 && c <= 0x7A)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

#include <stdio.h>

int main()
{
  char hex = 0x30;

  for (hex = 0x30; hex <= 0x66; hex++){
    if (hex <= 0x39 || hex >= 0x61)
      putchar(hex);
  }
  putchar('\n');

  return 0;
}

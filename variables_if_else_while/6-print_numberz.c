#include <stdio.h>

int main()
{
  int num = 0x30;

  for (num = 0x30; num <=0x39; num++){
    putchar(num);
  }
  putchar('\n');
  return 0;
}

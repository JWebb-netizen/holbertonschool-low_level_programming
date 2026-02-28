#include <stdio.h>

int main()
{
  int num = 0x30;

  while (num <= 0x39){
    putchar(num);
    if (num <0x39){
      putchar(',');
      putchar(' ');
    }
    num++;
  }
  putchar('\n');

  return 0;
}

#include "main.h"

void times_table(void)
{
  int i, row, col, a;
i = 0;
row = 0;
col = 0;
a = 0;
for (row = 0; row <= 9; row++)
{
while (col <= 9)
{
i = row * col;
do
{
_putchar(i % 10 + '0');
i = i / 10;
 a++;
} while (i > 0);
 if (col < 9)
   {
 _putchar(',');
do
  {
    _putchar(' ');
    a++;
  } while (a <= 2);
   }
 a = 0;
col++;
}
i = 0;
col = 0;
_putchar('\n');
}
return;
}

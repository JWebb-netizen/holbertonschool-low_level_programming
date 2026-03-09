#include "main.h"
void print_to_98(int n)
{
int a = 0, b = 0, c = 0, i = 0;
while (n != 98)
{
i = n;
if (n < 0)
{
i = n * -1;
_putchar('-');
}
c = i % 10;
b = (i / 10) % 10;
a = ((i / 10) / 10) % 10;
if (a == 0 && b == 0)
_putchar(c + '0');
else if (a == 0)
{
_putchar(b + '0');
_putchar(c + '0');
}
else
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(c + '0');
}
_putchar(',');
_putchar(' ');
if (n < 98)
n++;
else if (n > 98)
n--;
}
_putchar('9');
_putchar('8');
_putchar('\n');
return;
}

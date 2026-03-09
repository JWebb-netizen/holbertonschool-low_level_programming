#include "main.h"

int print_last_digit(int r)
{
if (r < 0)
r = (r + 1) * -1;
else
r = r - 1;
if (r % 10 + 1 == 0)
_putchar('0');
else if (r % 10 + 1 == 1)
_putchar('1');
else if (r % 10 + 1 == 2)
_putchar('2');
else if (r % 10 + 1 == 3)
_putchar('3');
else if (r % 10 + 1 == 4)
_putchar('4');
else if (r % 10 + 1 == 5)
_putchar('5');
else if (r % 10 + 1 == 6)
_putchar('6');
else if (r % 10 + 1 == 7)
_putchar('7');
else if (r % 10 + 1 == 8)
_putchar('8');
else if (r % 10 + 1 == 9)
_putchar('9');
 return (r % 10 + 1);
}

#include "main.h"

void puts_half(char *str)
{
int x, c;
x = c = 0;
for (x = 0; *str != '\0'; str += 2)
{
x++;
}
x--;
c = x - (x / 2);
for (x = c; *str != '\0'; str++)
{
_putchar(*str);
x++;
}
_putchar('\n');
return;
}

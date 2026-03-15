#include "main.h"

void puts2(char *str)
{
int x = 0;
for (x = 0; *str != '\0'; str += 2)
{
_putchar(*str);
x++;
}
_putchar('\n');
return;
}

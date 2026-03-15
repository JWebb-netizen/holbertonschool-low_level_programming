#include "main.h"

void _puts(char *str)
{
int x = 0;
for (x = 0; *str != '\0'; str++)
{
_putchar(*str);
x++;
}
_putchar('\n');
return;
}

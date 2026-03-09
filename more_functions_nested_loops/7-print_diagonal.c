#include "main.h"

void print_diagonal(int n)
{
int i = 0, x = 0;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
x = i;
while (x != 0)
{
_putchar(' ');
x--;
}
_putchar('\\');
_putchar('\n');
}
}
return;
}

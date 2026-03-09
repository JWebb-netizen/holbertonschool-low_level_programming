#include "main.h"

void print_square(int size)
{
int col = 0, row = 0;
if (size <= 0)
_putchar('\n');
else
{
for (row = size; row > 0; row--)
{
while (col < size)
{
_putchar('#');
col++;
}
col = 0;
_putchar('\n');
}
}
return;
}

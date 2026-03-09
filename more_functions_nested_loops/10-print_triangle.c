#include "main.h"

void print_triangle(int size)
{
int row = 0, i = 0, x = 0;
if (size <= 0)
_putchar('\n');
else
{
for (row = 1; row <= size; row++)
{
for (i = size - row; i > 0; i--)
{
_putchar(' ');
}
for  (x = row; x > 0; x--)
{
_putchar('#');
}
_putchar('\n');
}
}
return;
}

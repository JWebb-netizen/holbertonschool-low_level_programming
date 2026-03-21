#include "main.h"

void print_rev(char *str)
{
int x;
char a[1000] = {0};
for (x = 0; *str != '\0'; str++)
{
	a[x] = *str;
	x++;
}
x--;
while (x >= 0)
{
_putchar(a[x]);
x--;
}
_putchar('\n');
return;
}

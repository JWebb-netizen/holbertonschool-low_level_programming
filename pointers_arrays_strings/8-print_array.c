#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
while (n > 0)
{
if (n == 1)
{
printf("%d\n", *a);
a++;
n--;
}
else
{
printf("%d, ", *a);
a++;
n--;
}
}
return;
}

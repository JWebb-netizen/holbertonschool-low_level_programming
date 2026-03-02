#include <stdio.h>

int main(void)
{
char alpha = 0x61;
for (alpha = 0x61; alpha <= 0x7A; alpha++)
{
if (alpha != 0x65 && alpha != 0x71)
putchar(alpha);
}
putchar('\n');
return (0);
}

#include <stdio.h>

int main(void)
{
char num = 0x30;
while (num <= 0x39)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}

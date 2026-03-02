#include <stdio.h>

int main(void)
{
char alphaR = 0x7A;
for (alphaR = 0x7A; alphaR >= 0x61; alphaR--)
{
putchar (alphaR);
}
putchar ("\n");
}

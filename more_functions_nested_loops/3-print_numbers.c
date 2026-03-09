#include "main.h"

void print_numbers(void)
{
char num = 0x30;
for (num = 0x30; num <= 0x39; num++)
_putchar(num);
_putchar('\n');
return;
}

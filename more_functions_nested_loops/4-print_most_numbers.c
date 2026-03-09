#include "main.h"

void print_most_numbers(void)
{
char num = 0x30;
for (num = 0x30; num <= 0x39; num++)
if (num == 0x32 || num == 0x34)
;
else
_putchar(num);
_putchar('\n');
return;
}

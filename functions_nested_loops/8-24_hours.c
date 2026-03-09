#include "main.h"
void jack_bauer(void)
{
char a, b, c, d, e;
a = 0x30;
b = e = 0x30;
c = 0x30;
d = 0x30;
while (e < 0x46)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
if (d < 0x39)
d++;
else if (c < 0x35)
{
d = 0x30;
c++;
}
else if (b < 0x39)
{
d = 0x30;
c = 0x30;
b++;
e++;
}
else if (a < 0x32)
{
d = 0x30;
c = 0x30;
b = 0x30;
a++;
}
}
return;
}

#include "_putchar.c"

int print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}


int print_alphabet(void)
{
char alpha = 0x61;

for (alpha = 0x61; alpha <= 0x7A; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
return (0);
}

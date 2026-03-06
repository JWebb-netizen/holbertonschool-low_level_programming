#include "_putchar.c"

int print_alphabet_x10(void);

int main(void)
{
print_alphabet_x10();
return (0);
}


int print_alphabet_x10(void)
{
char alpha = 0x61;
int counter = 0;
while (counter != 10)
{
for (alpha = 0x61; alpha <= 0x7A; alpha++)
{
_putchar (alpha);
}
_putchar ('\n');
counter++;
}
return (0);
}

#include "_putchar.c"

/* uses putchar to output "_putchar" to the command line */

int main(void)
{
char text[9] = {"_putchar"};
int i;

i = 0;

for (i = 0; i < 8; i++)
putchar(text[i]);

putchar('\n');
return (0);
}

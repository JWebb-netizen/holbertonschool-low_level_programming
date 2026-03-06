#include "main.h"

/* uses putchar to output "_putchar" to the command line */

int main(void)
{
char text[9] = {"_putchar"}; 
int i;

i = 0;

for (i = 0; i < 8; i++)
{
_putchar(text[i]);
} 
_putchar('\n');
return (0);
}

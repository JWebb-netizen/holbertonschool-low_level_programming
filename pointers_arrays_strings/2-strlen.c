#include "main.h"

int _strlen(char *s)
{
int x = 0;
for (x = 0; *s != '\0'; s++)
x++;
return (x);
}

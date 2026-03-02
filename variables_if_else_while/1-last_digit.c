#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, c;
c = n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
while (n = getchar() != EOF || '\n')
{
c++;
printf("%d", c);
}
if (c >= 6)
{
printf("The last digit of %d is %d and is greater than 5\n", n, c);
}
else if (c == 0)
{
printf("The last digit of %d is %d and is 0\n", n, c);
}
else
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, c);
return (0);
}

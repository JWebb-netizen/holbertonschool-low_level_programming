#include <stdio.h>
#include <ctype.h>

int main()
{
    char alpha = 0x41;
    
    for (alpha = 0x41; alpha <= 0x7A; alpha++){
      if (alpha < 0x5B)
	putchar(tolower(alpha));
      else if (alpha > 0x60)
	putchar(toupper(alpha));
    }
    putchar('\n');
    return 0;
}

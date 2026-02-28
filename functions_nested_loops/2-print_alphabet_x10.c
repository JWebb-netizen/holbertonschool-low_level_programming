#include "_putchar.c"

void print_alphabet_x10(void)
{
  char alpha = 0x61;
  int counter = 0;
 
  while(counter != 10)
    {
  for (alpha = 0x61; alpha <= 0x7A; alpha++)
    {
      putchar(alpha);
    }
  putchar('\n');
  counter++;
    }
}

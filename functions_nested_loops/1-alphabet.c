#include "_putchar.c"

void print_alphabet(void)
{
  char alpha = 0x61;

  for (alpha = 0x61; alpha <= 0x7A; alpha++)
    {
      putchar(alpha);
    }
  putchar('\n');
}

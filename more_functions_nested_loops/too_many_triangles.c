#include "main.h"

void print_triangle(int size)
{
  int row = 0, col = 0, i = 0, x = 0;
  if (size <= 0)
    _putchar('\n');
  else
    {
  for (row = size; row > 0; row--)
    {
      
      while (col < size)
	{
	  for (i = size - row; i > 0; i--)
	    _putchar(' ');
	  for (x = row; x > 0; x--)
	    _putchar('#');
	  col++;
	}
      col = 0;
      _putchar('\n');
    }
    }
  return;
}

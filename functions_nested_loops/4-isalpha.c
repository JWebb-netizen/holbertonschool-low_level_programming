#include "_putchar.c"

int _isalpha(int c)
{
  while(c > 0x40 && c < 0x7B)
    {
      if(c > 0x5A && c < 0x61)
	{
	return(0);
        }	
      else
	{
	return(1);
	}
    }
  return(0);
}

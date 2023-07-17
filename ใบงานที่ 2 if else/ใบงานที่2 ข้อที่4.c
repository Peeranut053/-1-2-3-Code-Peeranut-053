#include <stdio.h>

int
main ()
{
  int num;
  printf ("Input your Number :");
  scanf ("%d", &num);
  if (num % 2 == 0)
    {
      printf ("%d = Even Number", num);
    }
  else
    {
      printf ("%d = Odd Number", num);
    }


  return 0;
}



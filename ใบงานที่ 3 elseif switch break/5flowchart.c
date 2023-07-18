/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, b, c, d, swap;
  printf ("Input A : ");
  scanf ("%d", &a);
  printf ("Input B : ");
  scanf ("%d", &b);
  printf ("Input C : ");
  scanf ("%d", &c);
  printf ("Input D : ");
  scanf ("%d", &d);

  if (a > b)
    {
      swap = a;
      a = b;
      b = swap;
      if (d >= a)
	{
	  if (c > d)
	    {
	      c = c - a;
	    }

	}
      else
	{
	  c = c + a;
	}
	b=a+c+d;
    }
else
{
  if (c > a && a >= b)
    {
      d += a;
    }
  {
    if (d > c)
      {
	b += 2;
      }
    else
      {
	b = 2 * b;
      }
  }
}

printf ("A = %d\nB = %d\nC = %d\nD = %d", a, b, c, d);

return 0;
}

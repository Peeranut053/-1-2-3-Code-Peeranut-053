/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n1, n2, n3;
  printf ("value 1 :");
  scanf ("%d", &n1);
  printf ("value 2 :");
  scanf ("%d", &n2);
  printf ("value 3 :");
  scanf ("%d", &n3);

  
  if (n1 >= n2 && n1 <= n3)
    {
      printf ("median = %d", n1);
    }
  else if (n1 <= n2 && n1 >= n3)
    {
      printf ("median = %d", n1);
    }
  else if (n2 >= n3 && n2 <= n1)
    {
      printf ("median = %d", n2);
    }
  else if (n2 <= n3 && n2 >= n1)
    {
      printf ("median = %d", n2);
    }
  else if (n1 >= n2 && n2 <= n3)
    {
      printf ("median = %d", n3);
    }
  else if (n1 <= n2 && n2 >= n3){
      printf ("median = %d", n3);
    }



  return 0;
}


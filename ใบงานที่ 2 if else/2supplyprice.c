/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float x;
    printf("Enter Your Suplly : ");
    scanf("%f",&x);
    if(x>10){
        printf("Price = %.2f Baht",x*6.5);
    }
    else{
        printf("Price = %.2f Baht",x*8);
    }
    

    return 0;
}


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1,n2;
    printf("Int 1 : ");
    scanf("%f",&n1);
    printf("Int 2 : ");
    scanf("%f",&n2);
    
    if(n1 != 0){
        printf("Result : %.2f",n1/n2);
    }
    else{
        printf("หารไม่ได้");
    }
    
    
    
    
    return 0;
}


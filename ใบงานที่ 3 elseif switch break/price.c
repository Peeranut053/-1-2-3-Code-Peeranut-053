/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a,b,c,d,e,w;
    a=18;b=22;c=28;d=38;e=58;
    printf("Enter your weight : ");
    scanf("%d",&w);
    if(w<=100){
        printf("Price : %d Bath",a);
    }
    else if(w>100 && w<=250){
        printf("Price : %d Bath",b);
    }
    else if(w>250 && w<=500){
        printf("Price : %d Bath",c);
    }
    else if(w>500 && w<=1000){
        printf("Price : %d Bath",d);
    }
    else if(w>1000 && w<=2000){
        printf("Price : %d Bath",e);
    }
    else if(w>2000){
        printf("Unable to register");
    }
   
   
   
    return 0;
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int prime = 0;
    printf("Prime Number : 1-1000\n");
    for(int p = 1;p<=1000;p++){
        for(int i=2;i<=p/2;i++){
            if(p%i == 0){
                prime = 1;
                break;
            }
            else{
                prime = 0;
            }
        }
        if(prime == 0){
            printf("%d\n",p);
        }
    }
    
    return 0;
}

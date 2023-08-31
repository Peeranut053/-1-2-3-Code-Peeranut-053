/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int f=0;
    printf("Input frequency : ");
    scanf("%d",&f);
    for(int i = -500;i <= 500;i+=f){
        printf("%3d\n",i);
    }
    
    return 0;
}

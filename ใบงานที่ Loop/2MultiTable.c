
#include <stdio.h>

int main()
{
    int multi = 0;
    int sum = 0;
    printf("Input Multi : ");
    scanf("%d",&multi);
    for(int i = 1;i <= 12;i++){
        sum=i*multi;
        printf("|%2d x %2d = %3d|\n",multi,i,sum);
    }
    
    return 0;
}

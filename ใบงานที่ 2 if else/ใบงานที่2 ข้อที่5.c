#include <stdio.h>

int main()
{
    int num;
    printf("Number = ");
    scanf("%d",&num);
    if(num > 0){
        printf("Result = %d",num);
    }
    else{
        num*=-1;
        printf("Result = %d",num);
    }
    return 0;
}



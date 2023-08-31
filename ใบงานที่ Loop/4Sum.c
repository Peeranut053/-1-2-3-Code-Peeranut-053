
#include <stdio.h>

int main()
{
    int n1,n2;
    int sum = 0;
    printf("Input Num1 : ");
    scanf("%d",&n1);
    printf("Input Num2 : ");
    scanf("%d",&n2);
    
    for(int i = n1;i <= n2;i++){
        sum+=i;
    }
    printf("Result %d to %d = %d",n1,n2,sum);
    
    return 0;
}

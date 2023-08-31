
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
        if(i%3 == 0){
            printf("%d\n",i);
        }
    }
    
    return 0;
}

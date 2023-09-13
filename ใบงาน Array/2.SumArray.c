#include <stdio.h>

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int sum = 0;
    
    for(int i = 0; i < 5; i++){
        sum += arr[i];
        printf("Arr[%d] : %d\n",i,arr[i]);
    }
    
    printf("Sum : %d",sum);
    
    return 0;
}

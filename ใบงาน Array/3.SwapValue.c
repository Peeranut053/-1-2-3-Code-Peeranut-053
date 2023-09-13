#include <stdio.h>
int main(){
    
    int arr1[4];
    int arr2[4];
    
    for(int i = 0; i < 5; i++){
        printf("Input Arr1[%d] : ",i);
        scanf("%d",&arr1[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("Input Arr2[%d] : ",i);
        scanf("%d",&arr2[i]);
    }
    
    int temp = 0;
    
    for(int i = 0; i < 5; i++){
        if(arr1[i] > arr2[i]){
            temp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = temp;
        }
    }
    
    for(int i = 0; i < 5; i++){
        printf("Arr1[%d] : %d\n",i,arr1[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("Arr2[%d] : %d\n",i,arr2[i]);
    }
    
    return 0;
}

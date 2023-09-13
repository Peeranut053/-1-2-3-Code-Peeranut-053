#include <stdio.h>
int main(){
    
    int arr1[5];
    int arr2[5];
    
    for(int i = 0; i < 5; i++){
        printf("Input Arr1[%d] : ",i);
        scanf("%d",&arr1[i]);
    }
    printf("%30s\n"," ");
    printf("%30s\n"," ");
    for(int i = 0; i < 5; i++){
        printf("Input Arr2[%d] : ",i);
        scanf("%d",&arr2[i]);
    }
    arr1[5] = arr1[0];
    arr2[5] = arr2[0];
    for(int i = 0; i < 5; i++){
        if(arr1[5] > arr1[i]){
            arr1[5] = arr1[i]; 
        }
        if(arr2[5] < arr2[i]){
            arr2[5] = arr2[i]; 
        }
    }
    printf("%30s\n"," ");
    printf("Min of Array1 : %d\n",arr1[5]);
    printf("Max of Array2 : %d",arr2[5]);
       
    return 0;
}
#include <stdio.h>
int main(){
    
    int arr1[5];
    int arr2[5];
    int i,j;
    for( i = 0; i < 5; i++){
        printf("Input Arr1[%d] : ",i);
        scanf("%d",&arr1[i]);
    }
    printf("%30s\n"," ");
    printf("%30s\n"," ");
    for( i = 0; i < 5; i++){
        printf("Input Arr2[%d] : ",i);
        scanf("%d",&arr2[i]);
    }
    printf("%30s\n"," ");
    printf("Array1 Min to Max : ");
    for(i = 0; i <= 4; i++){
        for(j = i+1; j <= 4; j++){
            if(arr1[i] > arr1[j]){
                int temp = 0;

                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
        printf("%d ", arr1[i]);
    }
    printf("%30s\n"," ");
    printf("Array2 Max to Min : ");
    for(i = 0; i <= 4; i++){
        for(j = i+1; j <= 4; j++){
            if(arr2[i] < arr2[j]){
                int temp = 0;

                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
        printf("%d ", arr2[i]);
    }
       
    return 0;
}
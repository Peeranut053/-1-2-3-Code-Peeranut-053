#include <stdio.h>

int main()
{
    float x;
    printf("Enter Your Suplly : ");
    scanf("%f",&x);
    if(x>10){
        printf("Price = %.2f Baht",x*6.5);
    }
    else{
        printf("Price = %.2f Baht",x*8);
    }
    

    return 0;
}



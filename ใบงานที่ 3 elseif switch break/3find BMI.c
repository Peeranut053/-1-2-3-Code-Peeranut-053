/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   
    float weight,height,BMI;
    printf("Enter your weight : ");
    scanf("%f",&weight);
    printf("Enter your height : ");
    scanf("%f",&height);
    
    BMI = weight/(height*height);
    
    if(BMI < 18.5){
        printf("น้ำหนักต่ำกว่าเกณฑ์");
    }
    else if(BMI >= 18.5 && BMI <= 22.9){
        printf("น้ำหนักสมส่วน");
    } 
    else if(BMI >= 23.0 && BMI <= 24.9){
        printf("น้ำหนักเกินมาตราฐาน");
    }
    else if(BMI >= 25.0 && BMI <= 29.9){
        printf("อ้วน");
    }
    else{
        printf("อ้วนมาก");
    } 
    
    

    return 0;
}

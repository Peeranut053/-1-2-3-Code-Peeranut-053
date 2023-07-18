/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
  int menu=4;
  float n1, n2;
  printf("Number 1 : ");
  scanf("%f",&n1);
  printf("Number 2 : ");
  scanf("%f",&n2);
   printf("[1]plus\n[2]minus\n[3]multiply\n[4]divide\nChose your number : ");
  scanf("%d",&menu);
  
  switch (menu){
      case 1:
      printf("result = %.2f",n1+n2);
      break;
      case 2:
      printf("result = %.2f",n1-n2);
      break;
      case 3:
      printf("result = %.2f",n1*n2);
      break;
      case 4:
      printf("result = %.2f",n1/n2);
      break;
  }
  
    

    return 0;
}



#include <stdio.h>

int main() {
   float num1,num2, mult;
   printf("Digite o número:\n");
   scanf("%f", &num1);
   
   printf("Digite o número:\n");
   scanf("%f", &num2);
   
   mult=num1*num2;
   printf("Seu resultdo da mult e % 2f", mult);
    return 0;
}
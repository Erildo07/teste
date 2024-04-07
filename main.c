#include <stdio.h>
int main(){

	int num1, num2, num3, num4;
	
	printf("Digite quatro numeros, de espaco para cada numero digitado:");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
	if(num1 > num2 && num1 > num3 && num1 > num4){
		
		printf("%d foi o maior numero digitado\n",num1);
	}
	else if(num2 > num1 && num2 > num3 && num2 > num4){
		
		printf("%d foi o maior numero digitado\n",num2);
	}
	else if(num3 > num2 && num3 > num1 && num3 > num4){
		
		printf("%d foi o maior numero digitado\n",num3);
	}
	else if(num4 > num2 && num4 > num3 && num4 > num1){
		
		printf("%d foi o maior numero digitado\n",num4);
	}
	
return 0;
}
#include <stdio.h>


int main(){
	int num, divisor;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	printf("\nOs divisores do numero %d", num);
	
	for (divisor = 1; num >= divisor; divisor++) {
		if (num % divisor == 0)
			printf("\n%d", divisor);
	}
	
	return 0;
}

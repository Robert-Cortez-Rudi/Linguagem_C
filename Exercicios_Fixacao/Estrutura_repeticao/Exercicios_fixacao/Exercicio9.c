#include <stdio.h>

int main(){
	int num, contador, validacao = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num < 1)
		printf("Nao e um numero primo");
	else {
		for (contador = 2; contador < num; contador++) {
			if (num % contador == 0) {
				validacao = 0;
				break;
			}			
		}
	}
	
	if (validacao)
		printf("E um numero primo!");
	else
		printf("Nao e um numero primo!");
	
	return 0;
}

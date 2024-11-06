#include <stdio.h>

int main(){
	int num, soma = 0;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	
	while (num != 0) {
		soma += num % 10;
		num /= 10;
	}
	
	printf("A soma dos digitos sao: %d", soma);
	
	
	return 0;
}

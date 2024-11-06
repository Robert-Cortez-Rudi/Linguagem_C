#include <stdio.h>

int main(){
	int num = 0;
	int contador = 0;
	
	do {
		printf("Insira um numero (negativo para sair): ");
		scanf("%d", &num);
		
		if (num < 0)
			break;

		contador += 1;
	} while (1);
	
	printf("Foram inseridos %d numeros", contador);
	
	return 0;
}

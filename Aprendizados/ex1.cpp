#include <stdio.h>

int main(){
	int numero, centena, dezena, unidade;
	
	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	printf("Numero lido: %d", numero);
	
	centena = numero / 100;
	dezena = (numero % 100) / 10;
	unidade = (numero % 100) % 10;
	
	printf("\nNumero invertido: %d%d%d", unidade, dezena, centena);
	
	return 0;
}


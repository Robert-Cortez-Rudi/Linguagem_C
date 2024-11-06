#include <stdio.h>

int main(){
	int num, quant_linhas, largura_linhas;
	
	printf("Insira o tamanho de uma piramide: ");
	scanf("%d", &num);
	
	for(quant_linhas = 1; quant_linhas <= num; quant_linhas++) {
		for(largura_linhas = 1; largura_linhas <= num - quant_linhas; largura_linhas++)
			printf(" ");
	
		for(largura_linhas = 1; largura_linhas <= (quant_linhas * 2 - 1); largura_linhas++)
			printf("*");	
		
		printf("\n");
	}
	
	return 0;
}

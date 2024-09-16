// Variável char sem o modificador

#include <stdio.h>

int main(){
	char var = 100;
	printf("Valor : %d\n", var); //100
	// Retorna o valor em código ASCII 
	
	var += 1;	
	printf("Valor : %d\n", var); //101
	
	printf("Valor : %d\n", var+1); //101
	return 0;
}


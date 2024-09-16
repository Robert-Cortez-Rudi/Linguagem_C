// Variável char com o modificador unsigned
#include <stdio.h>

int main(){
	unsigned char var = 255;
	printf ("Valor: %d\n", var);  //255
	
	var = var + 1;
	printf ("Valor: %d\n", var);  //0
	
	return 0;
}

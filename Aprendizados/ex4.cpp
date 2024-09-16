#include <stdio.h>
#include <conio.h>

void codigo_cesar(char frase[4]){
	char string_codificada[4];
	
	string_codificada[0] = frase[0] - 29;
	string_codificada[1] = frase[1] - 29;
	string_codificada[2] = frase[2] - 29;
	string_codificada[3] = frase[3] - 29;
	string_codificada[4] = frase[4] - 29;
	
	printf("\n\nString codificada: %s", string_codificada);
	
}

int main(){
	char caracteres[4];
	
	printf("Insira uma string com 5 caracteres: ");
	caracteres[0] = getche();
	caracteres[1] = getche();
	caracteres[2] = getche();
	caracteres[3] = getche();
	caracteres[4] = getche();
	
	codigo_cesar(caracteres);
	
	
	return 0;
}



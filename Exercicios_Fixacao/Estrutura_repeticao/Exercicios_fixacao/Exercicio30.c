#include <stdio.h>

int main(){
    char frase[100];
    int cont, quant_vogais = 0;

    printf("Insira uma string: ");
    gets(frase);

    for (cont = 0; frase[cont] != '\0'; cont++) {
        if (frase[cont] == 'a' || frase[cont] == 'e' || frase[cont] == 'i' || frase[cont] == 'o' || frase[cont] == 'u' || 
        frase[cont] == 'A' || frase[cont] == 'E' || frase[cont] == 'I' || frase[cont] == 'O' || frase[cont] == 'U') 
            quant_vogais++;          
    } 

    printf("Quantidade de vogais: %d", quant_vogais);

    return 0;
}

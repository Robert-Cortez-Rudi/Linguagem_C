#include <stdio.h>

int somaDigitos(int num) {
    int soma = 0;

    while (num != 0) {
        soma += num % 10;
        num /= 10;
    }

    return soma;
}


int main(){
    int numero, soma_digitos;

    do {
        printf("Insira um numero (0 para sair): ");
        scanf("%d", &numero);

        soma_digitos = somaDigitos(numero);

        if (numero != 0)
            printf("A soma dos digitos: %d\n\n", soma_digitos);

    } while (numero != 0);


    return 0;
}
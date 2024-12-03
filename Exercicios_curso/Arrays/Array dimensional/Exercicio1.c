#include <stdio.h>

int main(){
    int vet[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int num, valido = 0;
    int i;

    printf("Vetor: ");

    for ( i = 0; i <= 15; i += 1){
        printf("%d ", vet[i]);
    }

    printf("\nDigite o numero para ser buscado dentro do vetor: ");
    scanf("%d", &num);

    for ( i = 0; i <= 15; i += 1){
        if (vet[i] == num){
            printf("O numero %d foi encontrado na posicao %d", num, i);
            valido = 1;
            break;
        }
    }

    if (!valido)
        printf("O numero %d nao foi encontrado", num);

    return 0;
}
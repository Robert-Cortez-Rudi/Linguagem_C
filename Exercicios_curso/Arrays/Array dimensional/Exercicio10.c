#include <stdio.h>

int main() {
    int vetor[10], fatoriais[10]; 
    int i, f, fatorial;          

    printf("Digite os 10 valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        
        if (vetor[i] < 0) {
            printf("Erro: Número negativo não permitido. Programa encerrado.\n");
            return 1;
        }
    }

    for (i = 0; i < 10; i++) {
        fatorial = 1; 

        for (f = 1; f <= vetor[i]; f++) {
            fatorial *= f;
        }

        fatoriais[i] = fatorial; 
    }

    printf("\nVetor de fatoriais:\n");
    for (i = 0; i < 10; i++) {
        printf("Fatorial de %d é %d\n", vetor[i], fatoriais[i]);
    }

    return 0;
}

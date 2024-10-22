#include <stdio.h>

int main(){
    int nota;
    char conceito;

    printf("Digite a nota (de 0 a 100): ");
    scanf("%d", &nota);

    conceito = (nota >= 90) ? 'A': (nota >= 80) ? 'B' : (nota >= 70) ? 'C' : 'D';

    printf("O conceito final: %c", conceito);

    return 0;
}

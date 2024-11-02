#include <stdio.h>

int main(){
    int dividendo, divisor, resto, quociente = 0;

    printf("Insira o dividendo: ");
    scanf("%d", &dividendo);

    printf("Insira o divisor: ");
    scanf("%d", &divisor);

    if (divisor > dividendo) {
        printf("O divisor deve ser menor que o dividendo!");
        return 1;
    } 
    else {
        resto = dividendo;
        while (resto >= divisor) {
            resto -= divisor;
            quociente += 1;
        }
    }

    printf("\nO resto da divisao e: %d", resto);
    printf("\nO quociente da divisao e: %d", quociente);

    return 0;
}

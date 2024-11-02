#include <stdio.h>

int main(){
    int n, multiplicando, multiplicador, soma = 0;

    printf("Insira o valor do multiplicando: ");
    scanf("%d", &multiplicando);
    printf("Insira o valor do multiplicador: ");
    scanf("%d", &multiplicador);

    if (multiplicador < 0 || multiplicando < 0) {
        printf("Multiplicador ou multiplicando invalido");
        return 1;
    }
    else if (multiplicando > multiplicador) {
        printf("O multiplicando deve ser menor do que o multiplicador! ");
        return 1;
    }
    else {
        for (n = 1; n <= multiplicador; n++) {
            soma += multiplicando;
        }
    }

    printf("%d X %d = %d",multiplicando, multiplicador, soma);
    return 0;
}

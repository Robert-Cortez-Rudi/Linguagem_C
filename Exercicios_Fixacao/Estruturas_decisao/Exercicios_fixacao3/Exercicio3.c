#include <stdio.h>

int calculo_fatorial(int num){
    if (num == 0)
        return 1;
    return num * calculo_fatorial(num - 1);
}


int main(){
    int numero, fatorial;

    printf("Insira o numero para calcular seu fatorial: ");
    scanf("%d", &numero);

    fatorial = calculo_fatorial(numero);

    printf("A fatorial de !%d: %d", numero, fatorial);

    return 0;
}

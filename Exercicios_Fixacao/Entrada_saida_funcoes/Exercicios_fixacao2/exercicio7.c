#include <stdio.h>

int main(){
    int numero, centenas, dezenas, unidades, numero_invertido;
    printf("Digite um numero inteiro (de 100 a 999): ");
    scanf("%d", &numero);
    centenas = numero / 100;
    dezenas = (numero / 10) % 10;
    unidades = numero % 10;
    numero_invertido = (unidades * 100) + (dezenas * 10) + centenas;
    printf("%d", numero_invertido);
    return 0;
}

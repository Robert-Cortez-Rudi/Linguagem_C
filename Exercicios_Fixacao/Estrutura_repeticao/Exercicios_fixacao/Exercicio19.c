#include <stdio.h>

int quantidade_digitos(int num) {
    int quantidade = 0;
    while (num > 0) {
        num /= 10;
        quantidade++;
    }
    return quantidade;
}

int potencia (int num, int expoente){
    int resultado = 1;
    while (expoente > 0) {
        resultado *= num;
        expoente--;
    }
    return resultado;
}

int isArmstrong(int num) {
    int soma = 0, temporizador = num;
    int qtd_digitos = quantidade_digitos(num);

    while (temporizador > 0) {
        soma += potencia(temporizador % 10, qtd_digitos);
        temporizador /= 10;
    }

    return soma;
}



int main(){
    int numero, armstrong;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 9999){
        printf("Numero invalido, digite novamente!");
        return 1;
    }
    
    armstrong = isArmstrong(numero);

    if (armstrong == numero) 
        printf("%d e um numero armstrong", numero);
    else
        printf("%d nao e um numero armstrong", numero);

    return 0;
}

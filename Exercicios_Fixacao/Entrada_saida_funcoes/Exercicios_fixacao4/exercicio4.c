#include <stdio.h>

void imprimirTabelaMultiplicacao(int numero){
    printf("\n%d X 1 = %d", numero, numero * 1);
    printf("\n%d X 2 = %d", numero, numero * 2);
    printf("\n%d X 3 = %d", numero, numero * 3);
    printf("\n%d X 4 = %d", numero, numero * 4);
    printf("\n%d X 5 = %d", numero, numero * 5);
    printf("\n%d X 6 = %d", numero, numero * 6);
    printf("\n%d X 7 = %d", numero, numero * 7);
    printf("\n%d X 8 = %d", numero, numero * 8);
    printf("\n%d X 9 = %d", numero, numero * 9);
    printf("\n%d X 10 = %d", numero, numero * 10);

}



int main(){
    int num;

    printf("Digite um numero para gerar a tabela de multiplicacao: ");
    scanf("%d", &num);
    imprimirTabelaMultiplicacao(num);

    return 0;
}

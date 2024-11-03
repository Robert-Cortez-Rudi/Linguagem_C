#include <stdio.h>


int main(){
    int n = 1, numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("Numeros impares da sequencia: \n");

    /*for (n = 1; n <= numero; n++){
        if (n % 2 != 0){
            printf("%d\n", n);
        }
    }*/

    /*while (n <= numero){
        if (n % 2 != 0){
            printf("%d\n", n);
        }
        n++;
    }*/

    do {
        if (n % 2 != 0){
            printf("%d\n", n);
        }
        n++;
    } while (n <= numero);

    return 0;
}

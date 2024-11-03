#include <stdio.h>

int main() {
    int n1, n2, n3, quantidade, termos;

    printf("Insira a qunatidade de termos da sequencia de fibonacci: ");
    scanf("%d", &quantidade);

    n1 = 0;
    n2 = 1;

    /*for (termos = quantidade; termos > 0; termos--) {
        printf("%d ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }*/

    termos = quantidade;

    /*while (termos > 0) {
        printf("%d ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        termos--;
    }*/

    do {
        if (termos > 0)
            printf("%d ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        termos--;
    } while (termos > 0);


    return 0;
}

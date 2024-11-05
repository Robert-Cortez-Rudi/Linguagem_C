#include <stdio.h>

int main() {
    int n, i = 1, res;

    printf("Digite o numero para ver sua tabuada: ");
    scanf("%d", &n);

    /*while (i <= 10) {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
        i++;
    }*/

    do {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
        i++;
    } while (i <= 10);
    


    return 0;
}
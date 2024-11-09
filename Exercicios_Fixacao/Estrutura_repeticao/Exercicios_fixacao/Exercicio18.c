#include <stdio.h>

int main(){
    int n, num = 1;

    printf("Insira um numero para ver a quantidade de dobragem no valor: ");
    scanf("%d", &n);

    while (n != 0) {
        printf("%d ", num);
        num *= 2;
        n--;
    }

    return 0;
}

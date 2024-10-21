#include <stdio.h>


int main(){
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    printf("\nAntecessor: %d", num - 1);
    printf("\nSucessor: %d", num + 1);
    return 0;
}

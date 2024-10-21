#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    printf("O sucessor do numero %d e %d e seu antecessor e %d", num, num + 1, num - 1);
    return 0;
}

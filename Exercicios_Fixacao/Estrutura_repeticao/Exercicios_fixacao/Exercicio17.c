#include <stdio.h>

int main(){
    int num,pot;

    printf("Insira um numero para potenciacao com 2: ");
    scanf("%d", &num);

    for (pot = 1; pot <= num; pot++) 
        printf("2^%d\n", pot);
    
    return 0;
}

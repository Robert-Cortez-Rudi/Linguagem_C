#include <stdio.h>

int main(){
    int temperatura;
    char clima;

    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);

    clima = (temperatura >= 30) ? 'Quente' : (temperatura >= 20) ? 'Agradavel' : (temperatura >= 10) ? 'Frio' : 'Muito frio';

    return 0;
}

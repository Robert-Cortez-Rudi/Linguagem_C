#include <stdio.h>

int main(){
    int valor, metros;
    float pes;

    printf("Insira um valor em metros: ");
    scanf("%d", &metros);

    printf("Conversao de metros para pe: \n");
    printf("----------\n");
    printf("Pes -> Metros");

    for (valor = 1; valor <= metros; valor++){
        pes = valor * 3.28084;
        printf("\n%d -> ", valor);
        printf("%.5f", pes);
    }


    return 0;
}

#include <stdio.h>

int main(){
    int contador = 0;
    float a = 5000000, b = 7000000;

    while (a < b) {
        a += a * 0.03;
        b += b * 0.02;

        contador += 1;
    }

    printf("Total de anos para a cidade A passar a cidade B: %d", contador);

    return 0;
}

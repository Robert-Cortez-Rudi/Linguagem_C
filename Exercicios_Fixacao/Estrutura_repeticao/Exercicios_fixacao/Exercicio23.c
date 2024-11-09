#include <stdio.h>

int main(){
    float celsius;
    int fahrenheit;

    for (;;) { // Loop infinito
        printf("Insira a temperatura em Fahrenheit: ");
        scanf("%d", &fahrenheit);

        if (fahrenheit == 0)
            break;

        celsius = (5.0 / 9.0) * ((float)fahrenheit - 32.0);

        printf("A temperatura em Celsius e: %.2f\n", celsius);
    }



    return 0;
}
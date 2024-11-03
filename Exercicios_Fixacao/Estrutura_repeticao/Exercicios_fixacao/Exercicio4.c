#include <stdio.h>

int main(){
    int n, num, fatorial = 1;

    printf("Insira o numero para calcular seu fatorial: ");
    scanf("%d", &n);

    num = n;

    /*while (n > 0){
        fatorial *= n;
        n--;
    }*/

   do {
        if (n > 0)
            fatorial *= n;
        n--;
   } while (n > 0);
   

    printf("O fatorial %d! = %d", num, fatorial);

    return 0;
}

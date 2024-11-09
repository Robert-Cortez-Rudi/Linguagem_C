#include <stdio.h>

int main(){
    int numero, original, reverso = 0, digito;

    printf("Insira seu numero para ver se ele e palindromo ou nao: ");
    scanf("%d", &numero);

    original = numero;

    while (numero != 0) {
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    if (reverso == original)
        printf("O numero %d e palindromo", original);
    else
        printf("O numero %d nao e palindromo", original);

    return 0;
}

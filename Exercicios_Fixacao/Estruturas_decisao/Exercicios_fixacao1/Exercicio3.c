#include <stdio.h>
#include <conio.h>

int main(){
    char dig1_num1, dig2_num1, dig1_num2, dig2_num2;
    int num1, num2;
    char opr;

    printf("Insira os numeros e seu calculo a ser realizado: \n");

    dig1_num1 = getche() - '0';
    dig2_num1 = getche() - '0';

    opr = getche();

    dig1_num2 = getche() - '0';
    dig2_num2 = getche() - '0';

    num1 = dig1_num1 * 10 + dig2_num1;
    num2 = dig1_num2 * 10 + dig2_num2;

    switch (opr) {
        case '+':
            printf("=%d", num1 + num2);
            break;
        case '-':
            printf("=%d", num1 - num2);
            break;
        case '*':
            printf("=%d", num1 * num2);
            break;
        case '/':
            printf("=%d", num1 / num2);
            break;
        default:
            printf("Operador invalido");
    }
    return 0;

}

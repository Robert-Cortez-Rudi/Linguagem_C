#include <stdio.h> 
 
int main() { 
    char str[6]; // String de 5 caracteres + '\0' 
    int is_palindrome = 1; // Variável para verificar se é palíndromo 
    int i; 
 
    // Recebe a string de 5 caracteres 
    printf("Digite uma string de exatamente 5 caracteres: "); 
    scanf("%s", str); 
 
    // Verifica se a string contém apenas letras do alfabeto 
    i = 0; 
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) { 
        printf("Entrada invalida: a string deve conter apenas letras do alfabeto.\n"); 
        return 1; 
    } 
    i = 1; 
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) { 
        printf("Entrada invalida: a string deve conter apenas letras doalfabeto.\n"); 
        return 1; 
    } 
    i = 2; 
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) { 
        printf("Entrada invalida: a string deve conter apenas letras do alfabeto.\n"); 
        return 1; 
    } 
    i = 3; 
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) { 
        printf("Entrada invalida: a string deve conter apenas letras do alfabeto.\n"); 
        return 1; 
    } 
    i = 4; 
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) { 
        printf("Entrada invalida: a string deve conter apenas letras do alfabeto.\n"); 
        return 1; 
    } 
 
    // Converte todos os caracteres para minúsculas manualmente 
    i = 0; 
    if (str[i] >= 'A' && str[i] <= 'Z') { 
        str[i] = str[i] + ('a' - 'A'); 
    } 
    i = 1; 
    if (str[i] >= 'A' && str[i] <= 'Z') { 
        str[i] = str[i] + ('a' - 'A'); 
    } 
    i = 2; 
    if (str[i] >= 'A' && str[i] <= 'Z') { 
        str[i] = str[i] + ('a' - 'A'); 
    } 
    i = 3; 
    if (str[i] >= 'A' && str[i] <= 'Z') { 
        str[i] = str[i] + ('a' - 'A'); 
    } 
    i = 4; 
    if (str[i] >= 'A' && str[i] <= 'Z') { 
        str[i] = str[i] + ('a' - 'A'); 
    } 
 
    // Verifica se a string é um palíndromo 
    if (str[0] != str[4] || str[1] != str[3]) { 
        is_palindrome = 0; 
    } 
 
    // Exibe o resultado 
    if (is_palindrome) { 
        printf("A string e um palindromo.\n"); 
    } else { 
        printf("A string nao e um palindromo.\n"); 
    } 
 
    return 0; 
}
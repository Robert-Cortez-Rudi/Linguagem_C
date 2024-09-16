#include <stdio.h>
int main() {
  float nota, notaNormalizada;
  const float notaMax = 2.5;
  printf("Informe a nota [0.00-%.2f]: ", notaMax);
  scanf("%f", &nota);
  notaNormalizada = (nota / notaMax) * 10;
  printf("A nota normalizada [0.0-10.0]: %.2f\n", notaNormalizada);
  return 0;}
  

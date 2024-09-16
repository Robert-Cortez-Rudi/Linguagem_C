#include <stdio.h>

int main(){
	float salario_bruto, ir, inss, sindicato, descontos, salario_liquido;
	printf("Insira o salario bruto: R$ ");
	scanf("%f", &salario_bruto);
	
	ir = salario_bruto * 0.11;
	inss = salario_bruto * 0.08;
	sindicato = salario_bruto * 0.05;
	
	descontos = ir + inss + sindicato;
	
	salario_liquido = salario_bruto - descontos;
		
	printf("\nSalario Liquido: R$%.2f", salario_liquido);
	
	return 0;
}


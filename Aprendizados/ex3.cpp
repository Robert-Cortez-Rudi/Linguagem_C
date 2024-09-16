#include <stdio.h>

int main(){
	float pizza, complemento, bebidas, subtotal, taxa_servico, total, valor_pessoa;
	int quant_pizza, quant_complemento, quant_bebidas, quant_clientes;
	
	printf("Insira a quantidade de pizzas que serao compradas: ");
	scanf("%d", &quant_pizza);
	
	printf("Insira a quantidade de complementos que serao adicionados: ");
	scanf("%d", &quant_complemento);
	
	printf("Insira a quantidade de bebidas que serao compradas: ");
	scanf("%d", &quant_bebidas);
	
	printf("Insira a quantidade de clientes que farao o pedido: ");
	scanf("%d", &quant_clientes);
	
	pizza = quant_pizza * 78.00;
	bebidas = quant_bebidas * 14.00;
	complemento = quant_complemento * 4.50;
	
	subtotal = pizza + bebidas + complemento;
	
	taxa_servico = subtotal * 0.10;
	
	total = subtotal + taxa_servico;
	
	valor_pessoa = total / 2;
	
	printf("QTD  DESCRICAO     VALOR UNITARIO   TOTAL\n");
	printf("%d    Pizza         R$ 78,00         RS %.2f\n", quant_pizza, pizza);
	printf("%d    Complementos  R$ 4,50          RS %.2f\n", quant_complemento, complemento);
	printf("%d    Bebidas       R$ 14,00         RS %.2f\n\n", quant_bebidas, bebidas);
	
	printf("Subtotal: R$%.2f", subtotal);
	printf("\nTaxa de Servico: R$%.2f", taxa_servico);
	printf("\nTOTAL: R$%.2f", total);
	
	printf("\nQuantidade de clientes: %d", quant_clientes);
	
	printf("\nValor por pessoa: %.2f", valor_pessoa);
	
	return 0;
	
}

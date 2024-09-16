#include <stdio.h>

void duracao_minutos(int hora_inicio, int minuto_inicio, int hora_fim, int minuto_fim){
	int horas, minutos;
	
	horas = hora_fim - hora_inicio;
	minutos = (minuto_fim - minuto_inicio) + (horas * 60);
	
	printf("\n\nA duracao em minutos e: %d ", minutos);
}


int main(){
	int h_inicio, m_inicio, h_fim, m_fim;
	
	printf("Insira a hora e o minuto de inicio do jogo (separando hora e minuto por um espaco): ");
	//Ex: 12 30
	scanf("%d %d", &h_inicio, &m_inicio);
	
	printf("\nInsira a hora e o minuto do final do jogo (separando hora e minuto por um espaco): ");
	scanf("%d %d", &h_fim, &m_fim);
	
	duracao_minutos(h_inicio, m_inicio, h_fim, m_fim);
	
	return 0;
		
}


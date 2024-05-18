#include <stdio.h>

int main(){
	int opcao;
	do{
		//Menu de opÃ§Ãµes
		printf("Menu:\n");
		printf("1. Calcular a media de valores positivos\n");
		printf("0. Finalizar\n");
		printf("Escolha uma opÃ§Ã£o:\n");
		scanf("%d", &opcao);
		//OpÃ§Ãµes determinadas
		switch(opcao)
		{
		case 1:
			questao17();
			break;
		case 0:
			printf("Finalizado");
			break;
		default:
			printf("opÃ§Ã£o invÃ¡lida. Tente novamente");
			break;
		}	
	}while(opcao!=0);
	
	return 0;
}		
//ImplementaÃ§Ã£o da QuestÃ£o 17. MÃ©dia de nÃºmeros positivos.

void questao17(){
	printf("Entre com valores positivos (use um valor negativo para terminar):\n");
	
}


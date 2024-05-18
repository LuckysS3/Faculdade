#include <stdio.h>
#include "arquivo.h"

int opcao (){
    // Declaraçao de variaveis 
    int a;
    // Menu
    printf("Menu:\n");
    printf("1. Calcular a média dos valores positivos \n");
    printf("[2. Qurstao 20 \n");
    printf("3. Qurstao 22 \n");
    printf("4. Qurstao 30 \n");
    printf("5. Qurstao 31 \n");
    printf("0. Sair \n");
    scanf("%d",&a);

    //saida de dados 
    return (a);
}

void main (){
    // Declaraçao de variaveis 
    int menu; 
    // Oparaçoes determinadas
    do{
        menu = opcao();
        switch (menu){
        case 1: 
            questao17();
            break;
        case 2: 
            questao20();
            break;
        case 3: 
            questao22();
            break;
        case 4: 
            questao30();
            break;
        case 5: 
            questao31();
            break;
        case 0: 
            printf("Finalizada");
            break;
        default:
            printf("Opçao invalidade. Tente novamente");
            break;
        }
    }while (menu != 0);

}
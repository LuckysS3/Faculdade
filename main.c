#include <stdio.h>
#include "questao17.h"

int opecao (){
    int a;
    printf("Escolha qual questao \n");
    printf("[1] Qurstao 17 \n");
    printf("[2] Qurstao 20 \n");
    printf("[3] Qurstao 22 \n");
    printf("[4] Qurstao 30 \n");
    printf("[5] Qurstao 31 \n");
    printf("[6] Sair \n");
    scanf("%d",&a);
    return (a);
}

void main (){
    int menu;
    do{
        menu = opecao();
        switch (menu){
        case 1: 
            questao17();
            break;
        case 6: 
            printf("Finalizada");
            break;
        default:
            break;
        }
    }while (menu != 6);
}
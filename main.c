#include <stdio.h>
#include "questao17.h"
#include "questao20.h"
#include "questao22.h"
#include "questao30.h"
#include "questao31.h"

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
        case 6: 
            printf("Finalizada");
            break;
        default:
            break;
        }
    }while (menu != 6);
}
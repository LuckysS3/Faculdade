#include <stdio.h>

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

void questao17 (){
    printf("Ola");
}

void main (){
    int menu;
    menu = opecao();
    do{
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
    }while (menu != 0);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "arquivo.h"

int opcao (){
    // Declaraçao de variaveis 
    int a;

    // Menu
    printf("Menu:\n");
    printf("1. Calcular a média dos valores positivos \n");
    printf("2. Calculadora Sálario Semanal \n");
    printf("3. Sorteie um número mágico \n");
    printf("4. Qurestão 30 \n");
    printf("5. Qurestão 31 \n");
    printf("0. Sair \n");
    scanf("%d",&a);

    //saida de dados 
    return (a);
}

void questao22 (){
    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Gera o número aleatório entre 0 e 500
    int numeroMagico = rand() % 501;
    int palpite, tentativas = 0;

    printf("Adivinhe o numero magico entre 0 e 500!\n");

    // Loop até o usuário acertar o número
    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroMagico) {
            printf("Seu palpite e menor que o numero magico.\n");
        } else if (palpite > numeroMagico) {
            printf("Seu palpite e maior que o numero magico.\n");
        }
    } while (palpite != numeroMagico);

    // Classificação do usuário com base no número de tentativas
    if (tentativas <= 3) {
        printf("Parabens! Voce e muito sortudo!\n");
    } else if (tentativas <= 6) {
        printf("Parabens! Voce e sortudo!\n");
    } else if (tentativas <= 10) {
        printf("Voce e normal.\n");
    } else {
        printf("Tente novamente.\n");
    }

    printf("Voce acertou o numero magico %d em %d tentativas.\n", numeroMagico, tentativas);
}

void main (){
    // Declaraçao de variaveis 
    int menu; 

    // Reconhecer os caracteres especiais
    setlocale(LC_ALL,"");

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
void questao17 (){
    int contador=0;
    float valor, soma;
    printf("Digite um valor positivo(negativo ira finalizar a adição)");
    while(1){
    printf("Digite o valor");
    scanf("%f", &valor);
       if (valor<0)
       {
        break;
       }
       soma += valor;
       contador++;
    }
    if (contador > 0) {
        float media = soma / contador;
        printf("A media dos valores fornecidos e: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi fornecido.\n");
    } 
}

void questao20 (){
    // Declaraçao de variaveis 
    float horas, valor, salario, porcentagem;
    
    // Entrada de dados 
    printf("----------Calculadora Sálario Semanal---------- \n");
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f",&horas);
    printf("Digite o valor da hora: ");
    scanf("%f",&valor);

    // Manipulaçao dos dado / calculo das salario
    salario = horas * valor;

    // Bonificaçao 
    if (horas > 40 && horas < 60){
        porcentagem = salario * 50 / 100;   
        salario = salario + porcentagem;      
    }else if(horas > 60 ){
        porcentagem = salario * 100 / 100;   
        salario = salario + porcentagem;  
    }

    //saida de dados 
    printf("O salário do funcionario e de %.2f \n",salario);
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


void questao30 (){
    printf("Ola");
}
void questao31 (){
    printf("Ola");
}
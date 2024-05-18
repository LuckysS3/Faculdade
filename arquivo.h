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


void questao30 (){
    printf("Ola");
}
void questao31 (){
    printf("Ola");
}
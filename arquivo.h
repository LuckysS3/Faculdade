void questao17 (){
    printf("Ola");
}

void questao20 (){
    // Declaraçao de variaveis 
    float horas, valor, salario, porcentagem;
    
    // Entrada de dados 
    printf("----------Calculadora Salario Semanal---------- \n");
    printf("Digite o numero de horas trabalhadas: ");
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
    printf("O salario do funcionario e de %.2f \n",salario);
}

void questao22 (){
    printf("Ola");
}
void questao30 (){
    printf("Ola");
}
void questao31 (){
    printf("Ola");
}
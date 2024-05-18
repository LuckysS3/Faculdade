void questao17 (){
    int contador=0;
    float valor, soma;
    printf("DIgite um valor positivo(negativo ira finalizar a adição)");
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
    printf("Ola");
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
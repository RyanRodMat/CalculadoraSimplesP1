#include <stdio.h>
#include <math.h>

int soma(int a, int b){
    return a + b;
}
int main(){
    //Variável para determinar a operação usando switch case
    int operacao;
    //Prints básicos para uma simples interface
    printf("=========================SELECIONE A OPERACAO=========================\n");
    printf("1. Soma 2. Subtracao 3. Multiplicacao 4. Divisao 5. fatorial 6. Exponenciacao 7. Raiz quadrada 8. Equacao do 2 grau\n");
    scanf(" %d", &operacao);
    //Switch case para determinar a função a ser executada
    switch (operacao)
    {
    case 1:
        //Definição das variáveis
        int a;
        int b;
        //Prints interativos e atribuíndo valores às variáveis
        printf("Digite os numeros: \n");
        printf("Num 1\n");
        scanf(" %d", &a);
        printf("Num 2\n");
        scanf(" %d", &b);
        //Guardando resultado da soma em uma variável
        int resul = soma(a,b);
        //Printando resultado
        printf("O resultado da soma eh: %d", resul);
        break;
    
    default:
        break;
    }
}
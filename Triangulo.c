//programa que determina o tipo de triângulo
#include <stdio.h> //entrada e saída de dados
//função main inicia o programa
int main(int argc, char **argv){
    
    float A, B, C; //variáveis correspondentes aos lados do triângulo
    
    printf("Por favor, informe o valor do lado A: ");
    //solicita o lado A
    scanf("%f", &A); //armazena o valor em A
    setbuf(stdin, NULL); //limpa o buffer do teclado
    printf("Por favor, informe o valor do lado B: ");
    //solicita o lado B
    scanf("%f", &B); //armazena o valor em B    
    setbuf(stdin, NULL); //limpa o buffer do teclado
    printf("Por favor, informe o valor do lado C: ");
    //solicita o lado C
    scanf("%f", &C); //armazena o valor em C
    
    //exibe a informação de acordo com as condições
    if(A > B + C){
        printf("\nEstes valores não formam um triângulo!\n");
    }else if(A == B && B == C){
        printf("\nEste é um triângulo equilátero!\n");
    }else if(A == B || A == C || B == C){
        printf("\nEste é um triângulo isóceles!\n");
    }else{
        printf("\nEste é um triângulo escaleno!\n");
    }

    return 0;
}

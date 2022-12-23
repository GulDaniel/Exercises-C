//programa que calcula potência de dois números inseridos: n1 elevado a n2
#include <stdio.h> //entrada e saída de dados
#include <math.h> //biblioteca math para o cálculo de potência via pow
//função main inicia o programa
int main(int argc, char **argv){
    
    float n1; //base da potência
    float n2; //expoente da potência
    
    printf("Digite um número para a base: ");    
    //pede ao usuário que insira um valor para a base da potência
    scanf("%f", &n1); //armazena o valor em n1;
    printf("Digite mais um número para o expoente: ");
    //pede ao usuário que insira um valor para o expoente da potência
    scanf("%f", &n2); //armazena o valor em n2;
    
    float res = pow(n1, n2);
    //realiza o cálculo da potência e armazena o valor em res
    printf("%.2f elevado a %.2f é igual a: %.2f\n", n1, n2, res);
    //exibe o resultado com 2 casas decimais
    
    return 0;
    }


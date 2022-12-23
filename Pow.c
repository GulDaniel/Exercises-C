//programa que calcula potência de dois números inseridos: n1 elevado a n2
#include <stdio.h> //entrada e saída de dados
//função main inicia o programa
int main(int argc, char **argv){
    
    int n1; //base da potência
    int n2; //expoente da potência
    int res = 1; //variável do resultado
    
    printf("Digite um número para a base: ");    
    //pede ao usuário que insira um valor para a base da potência
    scanf("%d", &n1); //armazena o valor em n1;
    printf("Digite mais um número para o expoente: ");
    //pede ao usuário que insira um valor para o expoente da potência
    scanf("%d", &n2); //armazena o valor em n2;
    
    if(n2 == 0){
        printf("%02d elevado a 00 é igual a: 01\n", n1);
    }else{
    //realiza a potencialização
    for(int i = 0; i < n2; i++){
        res*=n1;
        }
    //exibe o resultado
    printf("%02d elevado a %02d é igual a: %02d\n", n1, n2, res);
    }
    
    return 0; 
    }

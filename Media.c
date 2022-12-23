//programa que calcula a média de um valor indeterminado de valores positivos
#include <stdio.h> //entrada e saída de dados

float calculaMedia();
//protótipo da função

//função main inicia o programa
int main(int argc, char **argv){
    
    printf("Média: %.2f\n", calculaMedia());
    return 0;
}

//função de cálculo de média
float calculaMedia(){
    
    float soma = 0, n = 1, i = 0; 
       
    while(n != 0){ 
        printf("Digite um valor positivo (0 para sair): "); //solicita valores positivos 
        scanf("%f", &n); //armazena o valor em n
           
        while(n < 0){ 
            printf("\nValor inválido!"); 
            printf("\nDigite um valor positivo: "); 
            scanf("%f", &n); 
          } 
           
        soma += n; 
        i++; 
    } 
       
    return soma/(i-1);        
}

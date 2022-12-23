//programa que calcula arrecadação com juros compostos de 5%
//vf = vp * (1 + t) ** n
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    
    double valor;
    double primal = 1000.0;
    double taxa = .05;
    int ano;
    
    printf("%4s%21s\n", "Ano", "Valor na conta" );

    for(ano = 1; ano <= 10; ano++){
        valor = primal * pow(1+taxa, ano);
        printf("%4d%21.2f\n", ano, valor);
        }
    return 0;
    }

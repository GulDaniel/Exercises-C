//programa que calcula a idade em diferentes unidades de tempo
#include <stdio.h> //entrada e saída de dados
//função main inicia o programa
int main(int argc, char **argv){
 
    int nascimento; //ano de nascimento do usuário
    int ano_atual; //ano atual em que o usuário utiliza o programa
    
    printf("Digite o ano em que você nasceu: ");    
    //pede ao usuário que insira o ano de nascimento
    scanf("%d", &nascimento); //armazena o valor em nascimento;
    printf("Digite o ano atual: ");
    //pede ao usuário que insira o ano atual
    scanf("%d", &ano_atual); //armazena o valor em ano_atual;
    
    int idade_anos = ano_atual - nascimento; //idade em anos
    int idade_meses = idade_anos * 12; //idade em meses
    int idade_dias = idade_meses * 30; 
    //idade em dias, tomando 30 dias como média para cada mês
    int idade_semanas = idade_dias / 7; //idade em semanas
    
    printf("Sua idade em anos é de: %d\n", idade_anos); //exibe idade_anos
    printf("Sua idade em meses é de: %d\n", idade_meses); //exibe idade_meses
    printf("Sua idade em semanas é de: %d\n", idade_semanas); 
    //exibe idade_semanas
    printf("Sua idade em dias é de: %d\n", idade_dias); //exibe idade_dias

    return 0;
    }

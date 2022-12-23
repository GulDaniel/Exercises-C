//programa que emula um caixa eletrônico simples
#include <stdio.h> //entrada e saída de dados
//função main inicia o programa
int main(int argc, char **argv){
    
    int senha; //variável usada para validação
    char opc; //escolha das ações na tela do usuário
    
    printf("Por favor, digite sua senha: "); //solicita a senha
    scanf("%d", &senha); //armazena o valor em senha
    
    //verificação da senha 1310 e exibição das opções
    if(senha != 1310){
        printf("Senha incorreta!\n");
    }
    if(senha == 1310){
        printf("----------------------------\n");
        printf("%4s %23s", "A =", "Saldo\n");
        printf("%4s %24s", "B =", "Depósito\n");
        printf("%4s %23s", "C =", "Pagamentos\n");
        printf("%4s %24s", "D =", "Transferências\n");    
        printf("%4s %23s", "E =", "Sair\n");
        printf("----------------------------\n");  
	
     setbuf(stdin, NULL); //limpa o buffer do teclado
     scanf("%c", &opc); //armazena a escolha em opc;
     //determina a ação de acordo com a escolha do usuário
     if(opc == 'a' || opc == 'A'){
         printf("Operação: Saldo");     
     }else if(opc == 'b' || opc == 'B'){  
         printf("Operação: Depósito");
     }else if(opc == 'c' || opc == 'C'){
         printf("Operação: Pagamentos");
     }else if(opc == 'd' || opc == 'D'){
         printf("Operação: Transferências");
     }else if(opc == 'e' || opc == 'E'){
         printf("Encerrando Operações");
     }else{
         printf("Opção inválida!");
     }
    }
    printf("\n");
    return 0;
}

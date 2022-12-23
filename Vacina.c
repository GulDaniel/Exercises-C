//programa que gera o comprovante de vacinação de Richard Starkey
#include <stdio.h> //entrada e saída de dados
//função main inicia o programa
int main(int argc, char **argv){
    
    int dia = 32, mes = 13, ano = 2019; //variáveis para a construção da data
    
    while(dia >= 32 || dia <= 0){ //evitando dias além de 1-31
    printf("Por favor, informe o dia em que recebeu a primeira dose (01-31): ");
    //solicita o dia da primeira dose ao usuário
    scanf("%d", &dia);
    //armazena o valor em dia
    }
    
    while(mes >= 13 || mes <= 0){ //evitando meses além de 1-12
    printf("Por favor, informe o mês (01-12): ");
    //solicita o mês da primeira dose ao usuário
    scanf("%d", &mes);
    //armazena o valor em mes
    }
    
    while(ano <= 2019){ //vacinação iniciada em 2020
    printf("Por favor, informe o ano: ");
    //solicita o ano da primeira dose ao usuário
    scanf("%d", &ano);
    //armazena o valor em ano
    }
    
    //exibe as informações do paciente e as datas da vacinação
    //2a dose um mês após a primeira
    printf("\n--------------------------------------------------------\n");
    printf("%42s", "COMPROVANTE DE VACINAÇÃO\n");
    printf("--------------------------------------------------------\n\n");
    printf("%12s%3s%25s", "NOME", ":", "Richard Starkey\n");
    printf("%12s%3s%25s", "CPF", ":", "11111111122\n");
    printf("%12s%3s%28s", "VACINA", ":", "Sputnik V – Gmaleya\n\n");
    printf(" Data da 1a dose: %02d/%02d/%02d\n", dia, mes, ano);
    if(mes == 12){
    printf(" Data da 2a dose: %02d/%02d/%02d\n", dia, mes-11, ano+1);
    //caso dezembro, retorna para janeiro
    }else{
    printf(" Data da 2a dose: %02d/%02d/%d\n", dia, mes+1, ano);
    }
    printf("\n--------------------------------------------------------\n\n");
    
    //criação do comprovante
    FILE *pont_arq; //cria uma variável ponteiro para o arquivo
    pont_arq = fopen("COMPROVANTE_RICHARD_STARKEY.txt", "w");
    //abre o arquivo para gravação
    
    //grava o comprovante
    fprintf(pont_arq, "\n--------------------------------------------------------\n");
    fprintf(pont_arq, "%42s", "COMPROVANTE DE VACINAÇÃO\n");
    fprintf(pont_arq, "--------------------------------------------------------\n\n");
    fprintf(pont_arq, "%12s%3s%25s", "NOME", ":", "Richard Starkey\n");
    fprintf(pont_arq, "%12s%3s%25s", "CPF", ":", "11111111122\n");
    fprintf(pont_arq, "%12s%3s%28s", "VACINA", ":", "Sputnik V – Gmaleya\n\n");
    fprintf(pont_arq, " Data da 1a dose: %02d/%02d/%02d\n", dia, mes, ano);
    if(mes == 12){
    fprintf(pont_arq, " Data da 2a dose: %02d/%02d/%02d\n", dia, mes-11, ano+1);
    //caso dezembro, retorna para janeiro
    }else{
    fprintf(pont_arq, " Data da 2a dose: %02d/%02d/%d\n", dia, mes+1, ano);
    }
    fprintf(pont_arq, "\n--------------------------------------------------------\n\n");
    
    fclose(pont_arq); //fecha o arquivo
    
    printf("Comprovante gerado com sucesso.\n\n");

    return 0;
}

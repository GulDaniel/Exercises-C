//programa que informa o signo
#include <stdio.h> //entrada e saída de dados
//função main inicia o programa
int main(int argc, char **argv){
    
    int dia, mes; //variáveis para identificar o signo
    
    printf("Insira seu dia de nascimento (01-31): ");
    //solicita o dia de nascimento
    scanf("%d", &dia); //armazena o valor em dia
    printf("Insira seu mês de nascimento (01-12): ");
    //solicita o mês de nascimento
    scanf("%d", &mes); //armazena o valor em mes
    
    //determina o signo pela data de nascimento
    if((mes == 1 && dia < 21) || (mes == 12 && dia > 21)){
        printf("Signo de Capricórnio.\n");
    }else if((mes == 1 && dia > 20) || (mes == 2 && dia < 20)){
        printf("Signo de Aquário.\n");   
    }else if((mes == 2 && dia > 19) || (mes == 3 && dia < 21)){
        printf("Signo de Peixes.\n");
    }else if((mes == 3 && dia > 20) || (mes == 4 && dia < 21)){
        printf("Signo de Áries.\n");
    }else if((mes == 4 && dia > 20) || (mes == 5 && dia < 21)){
        printf("Signo de Touro.\n");
    }else if((mes == 5 && dia > 20) || (mes == 6 && dia < 21)){
        printf("Signo de Gêmeos.\n");
    }else if((mes == 6 && dia > 20) || (mes == 7 && dia < 22)){
        printf("Signo de Câncer.\n");
    }else if((mes == 7 && dia > 21) || (mes == 8 && dia < 23)){
        printf("Signo de Leão.\n");
    }else if((mes == 8 && dia > 22) || (mes == 9 && dia < 23)){
        printf("Signo de Virgem.\n");
    }else if((mes == 9 && dia > 22) || (mes == 10 && dia < 23)){
        printf("Signo de Libra.\n");
    }else if((mes == 10 && dia > 22) || (mes == 11 && dia < 22)){
        printf("Signo de Escorpião.\n");
    }else if((mes == 11 && dia > 21) || (mes == 12 && dia < 22)){
        printf("Signo de Sagitário.\n");
    }
    return 0;
}

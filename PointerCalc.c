//calculadora simples de inteiros utilizando função
//ponteiro que redireciona a operação
#include <stdlib.h>
#include <stdio.h>

void sum(int a, int b){
    printf("\nA soma de %d e %d é igual a %d\n", a, b, a+b);
}

void dif(int a, int b){
    printf("\nA diferença entre %d e %d é igual a %d\n", a, b, a-b);
}

void mult(int a, int b){
    printf("\n%d multiplicado por %d é igual a %d\n", a, b, a*b);
}

void divi(int a, int b){
    if (b>0){
        printf("\n%d dividido por %d é igual a %d\n", a, b, a/b);
    } else {
        printf("\nDivisão por 0 é inválida!\n");
    }
}

int main(int argc, char **argv){
    int a;
    int b;
    int ch = 0;

    // void (*sum_ptr)(int, int) = sum;
    void (*calc[]) (int, int) = {sum, dif, mult, divi};

    while (ch != 5){
        printf("\n------------- CALC --------------\n");
        printf("\n1- Soma");
        printf("\n2- Subtração");
        printf("\n3- Multiplicação");
        printf("\n4- Divisão");
        printf("\n5- Sair\n");

        scanf("%d", &ch);

        if (ch == 5){
            break;
        } 

        if (ch < 1 || ch > 5){
            continue;
        }

        printf("\nPRIMEIRO VALOR: ");
        scanf("%d", &a);

        printf("\nSEGUNDO VALOR: ");
        scanf("%d", &b);

        calc[ch-1](a, b);
    }

    return 0;
}

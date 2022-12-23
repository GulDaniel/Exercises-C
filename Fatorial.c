//programa que exibe o fatorial de um número através de recursividade
#include <stdio.h>

int factorial(int n);

int main(int argc, char **argv){
    int n;
    printf("Digite um valor para saber seu fatorial: ");
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
    }

int factorial (int n){
    if(n > 1){
        return n*factorial(n-1);
        }
    return 1;
    }

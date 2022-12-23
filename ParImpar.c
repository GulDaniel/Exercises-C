//programa que diz se um número é par ou ímpar
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int num;
    scanf("%d", &num);
    if(num % 2 == 0){
    printf("Par\n");
    }else{
    printf("Impar\n");
    }
    return 0;
    }

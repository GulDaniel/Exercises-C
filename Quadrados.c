//programa que exibe os quadrados perfeitos (1-10)
#include <stdio.h>

int quadrado(int valor);
int main(int argc, char **argv){
    int i;
    int j;
    
    for(i=1; i<11; i++){
        printf("%d\t", i);
    }
    printf("\n");
    for(j=1; j<11; j++){
        printf("%d\t", quadrado(j));
    }
    printf("\n");
    
    return 0;
}

int quadrado(int valor){
    return valor*valor;
}

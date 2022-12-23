//programa que utiliza struct e ponteiros para
//parabenizar pelo aniversário com nome e idade
#include <stdio.h>

typedef struct Pessoa{
    char *nome;
    int idade;
}pessoa;

void niver(pessoa *p);

int main(int argc, char **argv){
    
    pessoa eu;
    eu.nome = "Daniel";
    eu.idade = 21;
    
    printf("%s tem %d anos.\n", eu.nome, eu.idade);
    printf("%s fez aniversário, parabéns!\n", eu.nome);
    
    niver(&eu);
    
    printf("%s agora tem %d anos!\n", eu.nome, eu.idade);
    
    return 0;
}

void niver(pessoa *p){
    //(*p).idade++;
    p -> idade++;
}      

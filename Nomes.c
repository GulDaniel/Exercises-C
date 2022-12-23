//programa que manipula strings
//strlen, strncmp, strncat
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv){
    char *first_name = "Daniel";
    char last_name[] = "Oliveira";
    char *space = " ";
    char name[100];
    
    printf("%ld\n", strlen(first_name));
    printf("%ld\n", strlen(last_name));
    
    if(strncmp(first_name, "Daniel", 6) == 0){
        printf("Acesso autorizado.\n");
    }
    
    if(strncmp(last_name, "Souza", 5) != 0){
        printf("Seu sobrenome não é Souza.\n");
    }
    
    strncat(name, first_name, 6);
    strncat(name, space, 7);
    strncat(name, last_name, 20);
    printf("%s\n", name);
    
    return 0;
}

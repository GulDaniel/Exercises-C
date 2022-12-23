//programa que calcula a média de até 100 notas em um vetor
//media, maior e menor nota
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    
    float notas[100], soma, media, max_nota, min_nota;
    int alunos, i;
    
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &alunos);
    
    for(i=0; i<alunos; i++){
        printf("Informe a nota: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    max_nota = notas[0];
    min_nota = notas[0];
        
    for(i=0; i<alunos; i++){
        if(notas[i] > max_nota){
            max_nota = notas[i];
            }
        if(notas[i] < min_nota){
            min_nota = notas[i];
            }
        }
    
    media = soma / alunos;
    printf("\nMedia da turma:\t%.2f\n", media);
    printf("Maior nota:\t%.2f\n", max_nota);
    printf("Menor nota:\t%.2f\n", min_nota);
    
    return 0;
}

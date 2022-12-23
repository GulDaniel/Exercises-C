//programa que calcula a média em duas turmas
//utilizando array multidimensional
#include <stdio.h>

int main(int argc, char **argv){
    
    int media_turma;
    int i;
    int j;
    
    int media[2][5];

    media[0][0] = 17;
    media[0][1] = 22;
    media[0][2] = 23;
    media[0][3] = 18;
    media[0][4] = 20;
    media[1][0] = 25;
    media[1][1] = 19;
    media[1][2] = 17;
    media[1][3] = 16;
    media[1][4] = 13;
    
    for(i=0; i<2; i++){
        media_turma = 0;
        for(j=0; j<5; j++){
            media_turma += media[i][j];
        }
        media_turma /= 5;
    printf("Média na matéria %d: %d\n", i+1, media_turma);
    }

    return 0;
}

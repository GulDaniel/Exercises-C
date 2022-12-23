//programa que exibe a temperatura Fahrenheit em Celsius (0-300)
#include <stdio.h>
#define LOWER 0
#define SKIP 20
#define UPPER 300

    int main(int argc, char **argv){
    
    /*
    int lower = 0, skip = 20, upper = 300;
    float celsius, fahr;
    fahr = lower;
    printf("%4s%12s", "Fahr", "Celsius\n");
    
    while(fahr <= upper){
        
            celsius = 5.0/9.0 * (fahr - 32.0);
            printf("%4.0f%11.1f\n", fahr, celsius);
            fahr += skip;
        }
    */

    printf("%4s%12s", "Fahr", "Celsius\n");
    
    int fahr;
    
    for(fahr=LOWER; fahr<=UPPER; fahr+=SKIP){
        printf("%4d%11.1f\n", fahr, 5.0/9.0 * (fahr-32));
        }
    
    return 0;
    }

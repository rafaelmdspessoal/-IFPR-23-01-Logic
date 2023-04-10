#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    int start_range = 10, end_range = 100;
    float value;

    printf("Digite um número real: ");
    scanf("%f", &value);

    if (value > start_range && value < end_range){       
        printf(
            "Número está entre %d e %d - intervalo permitido", 
            start_range, 
            end_range
        );
    }
    else{
        printf("Número fora do intervalo permitido.");
    }

    return 0;
}
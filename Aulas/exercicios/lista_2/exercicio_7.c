#include <stdio.h>
#include <math.h>

float get_harmonic_average(float values[]){
    int size = 4;
    float ha = (
        size / (
        (1 / values[0]) + 
        (1 / values[1]) + 
        (1 / values[2]) + 
        (1 / values[3]))
    );
    
    return ha;
}

int main(){
    float values[4];
    float ha;

    printf("Digite um número: ");
    scanf("%f", &values[0]);
    
    printf("Digite um número: ");
    scanf("%f", &values[1]);
    
    printf("Digite um número: ");
    scanf("%f", &values[2]);
    
    printf("Digite um número: ");
    scanf("%f", &values[3]);

    ha = get_harmonic_average(values);    

    printf("A média harmonica dos valores dados é: %.2f", ha);
    return 0;
}
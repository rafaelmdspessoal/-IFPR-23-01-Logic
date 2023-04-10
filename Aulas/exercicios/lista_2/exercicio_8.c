#include <stdio.h>
#include <math.h>

float get_quadratic_average(float values[]){
    int size = 4;
    float sqr_sum;
    for(int i = 0; i < size; i++){
        sqr_sum += pow(values[i], 2);
    }
    float qa = sqrt(sqr_sum / size);
    
    return qa;
}

int main(){
    float values[4];
    float qa;

    printf("Digite um número: ");
    scanf("%f", &values[0]);
    
    printf("Digite um número: ");
    scanf("%f", &values[1]);
    
    printf("Digite um número: ");
    scanf("%f", &values[2]);
    
    printf("Digite um número: ");
    scanf("%f", &values[3]);

    qa = get_quadratic_average(values);    

    printf("A média quadratica dos valores dados é: %.2f", qa);
    return 0;
}
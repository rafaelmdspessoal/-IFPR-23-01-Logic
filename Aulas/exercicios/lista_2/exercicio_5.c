#include <stdio.h>
#include <math.h>

int main(){
    float num1;
    float quad_num1, cub_num1;

    printf("Digite um número: ");
    scanf("%f", &num1);
    
    quad_num1 = pow(num1, 2);
    cub_num1 = pow(num1, 3);

    printf("Número %.2f \t quadrado %.2f \t cubo %.2f \t", num1, quad_num1, cub_num1);
    return 0;
}
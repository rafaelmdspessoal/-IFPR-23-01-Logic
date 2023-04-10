#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    float side_a, side_b, side_c;

    printf("Digite o lado A: ");
    scanf("%f", &side_a);
    printf("Digite o lado B: ");
    scanf("%f", &side_b);
    printf("Digite o lado C: ");
    scanf("%f", &side_c);

    if(
        side_a + side_b < side_c ||
        side_a + side_c < side_b ||
        side_b + side_c < side_a
    ){
        printf("Valores não consituem um triângulo.");
        return 0;
    }

    if (side_a == side_b && side_b == side_c){       
        printf("Triângulo Equilátero");
    }
    else if(
        side_a == side_b || 
        side_a == side_c ||
        side_b == side_c){       
        printf("Triângulo Isósceles");
    }
    else{
        printf("Triângulo Escaleno");
    }

    return 0;
}
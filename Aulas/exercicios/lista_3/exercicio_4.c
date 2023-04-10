#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    float num1;
    float result;

    printf("Digite um número real: ");
    scanf("%f", &num1);

    if (num1 >= 0){
        result = sqrt(num1);
    }
    else {
        result = pow(num1, 3);
    }

    printf("O resultado é: %.2f", result);

    return 0;
}
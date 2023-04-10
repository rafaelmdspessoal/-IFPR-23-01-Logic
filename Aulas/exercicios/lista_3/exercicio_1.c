#include <stdio.h>

int main(){
    float num1;

    printf("Digite um número: ");
    scanf("%f", &num1);
    
    if(num1 > 0){
        printf("O número é positivo.");
    }
    else if(num1 < 0){
        printf("O número é negativo.");
    }
    else{
        printf("O número é nulo.");
    }

    return 0;
}
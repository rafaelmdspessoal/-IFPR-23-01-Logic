#include <stdio.h>

int main(){
    float num1;

    printf("Digite um número: ");
    scanf("%f", &num1);
    
    if(num1 % 3 == 0){
        printf("O número é multiplo de 3.");
    }
    else{
        printf("O número não é multiplo de 3.");
    }

    return 0;
}
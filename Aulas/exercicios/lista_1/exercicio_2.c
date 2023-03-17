#include <stdio.h>

float convert_money(float amount, float ratio){
    return amount * ratio;
}

int main(){
    float valor_dolar;
    float valor_real;
    float cotacao_dolar;

    printf("Dolars to convert: $");
    scanf("%f", &valor_dolar);

    printf("\n");

    printf("Ration between dolar and real\n");
    scanf("%f", &cotacao_dolar);

    printf("\n");

    valor_real = convert_money(valor_dolar, cotacao_dolar);
    printf("The value in Reais is: R$");
    printf("%f", valor_real);
    printf("\n");
    return 0;
}
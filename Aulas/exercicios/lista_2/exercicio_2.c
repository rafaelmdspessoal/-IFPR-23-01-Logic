#include <stdio.h>

int main(){
    float valor_total;
    float valor_parcela;
    int parcelas;

    printf("Digite o total da compra: R$");
    scanf("%f", &valor_total);
    
    printf("Digite o número de parcelas: ");
    scanf("%d", &parcelas);    

    valor_parcela = valor_total / parcelas;

    printf("%d X R$%.2f = R$%.2f", parcelas, valor_parcela, valor_total);
    return 0;
}
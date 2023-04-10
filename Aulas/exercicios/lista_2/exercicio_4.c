#include <stdio.h>
#include <math.h>

int main(){
    int num1;
    float raiz_num1;

    printf("Digite um número real: ");
    scanf("%d", &num1);
    
    raiz_num1 = sqrt(num1);

    printf("A raiz quadrada de %d é %.2f", num1, raiz_num1);
    return 0;
}
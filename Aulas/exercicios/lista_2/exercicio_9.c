#include <stdio.h>

int main(){    
    int num;
    int remainder;
    int t, c, d, u;

    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &num);

    t = num / 1000;
    remainder = num % 1000;

    c = remainder / 100;
    remainder = remainder % 100;

    d = remainder / 10;
    remainder = remainder % 10;

    u = remainder;

    printf(
        "A soma de %d é: %d + %d + %d + %d = %d", 
        num, 
        t, 
        c, 
        d,
        u,
        t + c + d + u);
    return 0;
}
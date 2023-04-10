#include <stdio.h>
#include <math.h>

int main(){
    float num1;
    float _floor, _ceil;

    printf("Digite um número: ");
    scanf("%f", &num1);
    
    _floor = floor(num1);
    _ceil = ceil(num1);

    printf(
        "Número %.2f arredondado para baixo é %.2f e para cima é %.2f", 
        num1, 
        _floor, 
        _ceil
    );
    return 0;
}
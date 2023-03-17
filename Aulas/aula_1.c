#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("digite um numero\n");
    scanf("%d", &num1);
    printf("digite outro numero\n");
    scanf("%d", &num2);
    num3 = num1 + num2;     
    printf("a soma deles e\n");
    printf("%d", num3);
    printf("\n");
    return 0;
}
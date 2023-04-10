#include <stdio.h>

int main(){    
    int num1, num2;
    int temp_num;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um número: ");
    scanf("%d", &num2);

    printf("Os números originais %d e %d ", num1, num2);
    
    temp_num = num1;
    num1 = num2;
    num2 = temp_num;

    printf("foram inverdidos de modo: %d e %d ", num1, num2);
    
    return 0;
}
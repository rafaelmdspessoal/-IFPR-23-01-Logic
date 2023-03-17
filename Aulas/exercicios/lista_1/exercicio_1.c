#include <stdio.h>

void sum_values(int num1, int num2){
    int sum;
    sum = num1 + num2;
    printf("Their sum is: ");
    printf("%d", sum);
    printf("\n");
}

void sub_values(int num1, int num2){
    int dif;
    dif = num1 - num2;
    printf("Their difference is: ");
    printf("%d", dif);
    printf("\n");
}

void prod_values(int num1, int num2){
    int prod;
    prod = num1 * num2;
    printf("Their product is: ");
    printf("%d", prod);
    printf("\n");
}

void div_values(int num1, int num2){
    int div;
    div = num1 / num2;
    printf("Their ratio is: ");
    printf("%d", div);
    printf("\n");
}

int main(){
    int num1, num2;
    int sum;
    int dif;
    int mult;
    float div;

    printf("Type a number \n");
    scanf("%d", &num1);
    printf("Type another number \n");
    scanf("%d", &num2);

    sum_values(num1, num2);   
    sub_values(num1, num2); 
    prod_values(num1, num2); 
    div_values(num1, num2);   
    
    return 0;
}
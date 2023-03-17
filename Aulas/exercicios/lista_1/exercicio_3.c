#include <stdio.h>

float calculate_comission(float amount, float percentage){
    return amount * percentage;
}

int main(){
    float total_sales;
    float comission;
    float comission_percentage = 0.1;  // 10%

    printf("Total amount sold: R$");
    scanf("%f", &total_sales);

    comission = calculate_comission(total_sales, comission_percentage);

    printf("The comission is: R$");
    printf("%f", comission);
    printf("\n");

    return 0;
}
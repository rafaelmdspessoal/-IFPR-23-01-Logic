#include <stdio.h>

float calculate_spent_amount_percentage(float total_spent, float percentage){
    return total_spent * percentage;
}

int main(){
    float total_spent;
    float discount;
    float fee;
    float amout_with_discount;
    float amout_with_fee;

    printf("Total spent R$ ");
    scanf("%f", &total_spent);
    
    discount = calculate_spent_amount_percentage(total_spent, 0.1);
    fee = calculate_spent_amount_percentage(total_spent, 0.05);

    amout_with_discount = total_spent - discount;
    amout_with_fee = total_spent + fee;

    printf(
        "The amount with 10%% discount is R$%f and with 5%% fee is R$%f",
        amout_with_discount,
        amout_with_fee
    );
    

    return 0;
}

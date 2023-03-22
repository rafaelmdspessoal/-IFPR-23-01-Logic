#include <stdio.h>

float calculate_change(float value, float cost){
    return value - cost;
}

int main(){
    float value, cost;
    float change;

    printf("Amount paid R$ ");
    scanf("%f", &value);
    printf("Product cost R$ ");
    scanf("%f", &cost);

    change = calculate_change(value, cost);

    if (change > 0){
        printf("Your chage is: R$ %f", change);
    }
    else{
        printf("You still ows: R$ %f", change * -1);
    }

    return 0;
}

#include <stdio.h>
float get_total_cost(float width, float length, float price){
    float area;
    area = width * length;
    return area * price;
}

int main(){
    float width;
    float length;
    float total_cost;
    float price_per_sqr_meter;

    printf("Room width (m): ");
    scanf("%f", &width);

    printf("Room length (m): ");
    scanf("%f", &length);

    printf("Squared meter price (m^2): ");
    scanf("%f", &price_per_sqr_meter);

    total_cost = get_total_cost(width, length, price_per_sqr_meter);

    printf("The cost for %f m^2 of lining is: R$%f", width * length, total_cost);
    printf("\n");
}
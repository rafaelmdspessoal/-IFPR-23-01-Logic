#include <stdio.h>

float get_average_fuel_consumption(float distance, float fuel_spent){
    return distance / fuel_spent;
}

int main(){
    float distance;
    float fuel_spent;
    float average_fuel_consumption;

    printf("Distance travelled: Km ");
    scanf("%f", &distance);

    

    average_fuel_consumption = get_average_fuel_consumption(distance, fuel_spent);

    printf("The average consumption is: Km/L");
    printf("%f", average_fuel_consumption);
    printf("\n");

    return 0;
}
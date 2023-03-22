#include <stdio.h>

float calculate_average(float num1, float num2, float num3, float num4){
    return (num1 + num2 + num3 + num4) / 4;
}

int main(){
    float num1, num2, num3, num4;
    float average;

    printf("Type a number: ");
    scanf("%f", &num1);
    printf("Type a number: ");
    scanf("%f", &num2);
    printf("Type a number: ");
    scanf("%f", &num3);
    printf("Type a number: ");
    scanf("%f", &num4);

    average = calculate_average(num1, num2, num3, num4);

    printf("The average of the given values is %f", average);

    return 0;
}

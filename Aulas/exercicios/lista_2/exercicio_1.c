#include <stdio.h>

float get_average(int num1, int num2, int num3, int num_values){
    int total = num1 + num2 + num3;
    float average = total / num_values;
    return average;
}

int main(){
    int num1, num2, num3;
    int num_values = 3;
    float average;

    printf("Type a number \n");
    scanf("%d", &num1);
    
    printf("Type a number \n");
    scanf("%d", &num2);
    
    printf("Type a number \n");
    scanf("%d", &num3);

    average = get_average(num1, num2, num3, num_values);

    printf("The average is: %f", average);
    return 0;
}
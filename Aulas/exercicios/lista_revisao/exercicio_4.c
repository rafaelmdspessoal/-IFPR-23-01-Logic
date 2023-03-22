#include <stdio.h>

float calculate_triangle_area(float base, float height){
    return (base * height) / 2;
}

int main(){
    float base, height;
    float area;

    printf("Type the size of the triangle base: ");
    scanf("%f", &base);
    printf("Type the height of the triangle: ");
    scanf("%f", &height);

    area = calculate_triangle_area(base, height);

    printf("The area of the triangle is %f", area);

    return 0;
}

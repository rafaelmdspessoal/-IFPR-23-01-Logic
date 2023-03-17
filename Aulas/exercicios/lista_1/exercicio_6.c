#include <stdio.h>

float calclate_remaining_time(float file_size, float speed){
    return file_size / speed;
}

int main(){
    float file_size;
    float internet_speed;
    float time_to_download;

    printf("File size (bits): ");
    scanf("%f", &file_size);

    printf("Internet speed (bits/s): ");
    scanf("%f", &internet_speed);
    
    time_to_download = calclate_remaining_time(file_size, internet_speed);
    printf("Remaining time: %f s", time_to_download);
    printf("\n");

    return 0;
}
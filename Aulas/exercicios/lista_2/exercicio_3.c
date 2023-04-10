#include <stdio.h>

int main(){    
    int event_duration;
    int hours, minutes, seconds;

    printf("Digite o tempo de duração do evento: ");
    scanf("%d", &event_duration);

    int seconds_to_hours = 3600;
    hours = event_duration / seconds_to_hours;

    int remaining_time = event_duration % seconds_to_hours;

    int seconds_to_minutes = 60;
    minutes = remaining_time / seconds_to_minutes;

    seconds = remaining_time % seconds_to_minutes;    

    printf("%ds = %d:%d:%d", event_duration, hours, minutes, seconds);
    return 0;
}
#include <stdio.h>

float convert_celcius_to_farenheit(float temperature){
    return (1.8 * temperature) + 32;
}

float convert_celcius_to_kelvin(float temperature){
    return temperature + 273;
}

int main(){
    float temperature_celcius;
    float temperature_farenheit;
    float temperature_kelvin;

    printf("Type a temperature °C ");
    scanf("%f", &temperature_celcius);
    
    temperature_kelvin = convert_celcius_to_kelvin(temperature_celcius);
    temperature_farenheit = convert_celcius_to_farenheit(temperature_celcius);

    printf(
        "The temperature %.1f°C when converted to Farenheit is %.1f°F and to Kelvin is %.1fK",
        temperature_celcius,
        temperature_farenheit,
        temperature_kelvin
    );
    
    return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>

float get_imc(float peso, float altura){
    float imc;
    imc = peso / pow(altura, 2);
    return imc;
}

int main(){
    char genero;
    float peso;
    float altura;
    float imc;

    setlocale(LC_ALL,"");

    printf("Digite seu gênero (M/F): ");
    scanf("%c", &genero);
    genero = tolower(genero);

    if (!(genero == 'm' || genero == 'f')){
        printf("Genero inválido");
        return 0;
    }

    fflush(stdin);
    printf("Digite seu peso (Kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = get_imc(peso, altura);

    if (genero == 'm'){
        if (imc < 19){
            printf("Abaixo do peso.");
        }
        else if (imc >= 19 && imc < 24){
            printf("Normal.");
        }
        else if (imc >= 24 && imc < 29){
            printf("Obesidade leve.");
        }
        else if (imc >= 29 && imc < 39){
            printf("Obesidade moderada.");
        }
        else{
            printf("Obesidade mórbida.");
        }
    }
    else {
        if (imc < 20){
            printf("Abaixo do peso.");
        }
        else if (imc >= 20 && imc < 25){
            printf("Normal.");
        }
        else if (imc >= 25 && imc < 30){
            printf("Obesidade leve.");
        }
        else if (imc >= 30 && imc < 40){
            printf("Obesidade moderada.");
        }
        else{
            printf("Obesidade mórbida.");
        }
    }

    printf(" Seu IMC é de: %.2f", imc);

    return 0;
}
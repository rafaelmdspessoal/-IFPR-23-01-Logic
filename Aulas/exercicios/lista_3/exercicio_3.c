#include <stdio.h>
#include <ctype.h>

int main(){
    char est_civil;

    printf("Digite o estado civil (S, C, D, V): ");
    scanf("%c", &est_civil);

    est_civil = tolower(est_civil);
    
    if(est_civil == 's'){
        printf("Solteiro(a).");
    }
    else if(est_civil == 'c'){
        printf("Casado(a).");
    }
    else if(est_civil == 'd'){
        printf("Divorciado(a).");
    }
    else if(est_civil == 'v'){
        printf("Viuvo(a).");
    }
    else{
        printf("Opcão inválida.");
    }

    return 0;
}
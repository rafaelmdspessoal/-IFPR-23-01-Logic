#include <stdio.h>
#include <ctype.h>
#include <math.h>

float raise_by(float salary, float percentage){
    return (1 + percentage) * salary;
}

int main(){
    float twenty_pc = 0.2, ten_pc = 0.1, five_pc = 0.05, zero_pc = 0;
    float current_pc = zero_pc;
    float salary;

    printf("Digite o salário atual: R$");
    scanf("%f", &salary);

    if (salary >= 0 && salary <= 990){       
        current_pc = twenty_pc;
    }
    else if(salary > 990 && salary <= 1480){       
        current_pc = ten_pc;
    }
    else if(salary > 1480 && salary <= 2000){       
        current_pc = ten_pc;
    }
    else{
        current_pc = zero_pc;
    }

    salary = raise_by(salary, current_pc);

    printf("O salário reajustado é de R$%f", salary);

    return 0;
}
#include <stdio.h>

int main(){
    int num1, antecessor, successor;

    printf("Type a number: ");
    scanf("%d", &num1);

    antecessor = num1 - 1;
    successor = num1 + 1;

    printf(
        "The antecessor of %d is %d and it's successor is %d.",
        num1,
        antecessor,
        successor
    );

    return 0;
}

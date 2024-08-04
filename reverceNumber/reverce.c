#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(void) {
    int inputNumber;
    int revereced = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &inputNumber);

    // Check if the input number is negative
    if (inputNumber < 0) {
        printf("Error: Input must be a positive integer.\n");
        return 1;
    }

    while(inputNumber > 0) {
        int tmpNumber = inputNumber % 10;
        revereced = revereced * 10 + tmpNumber;
        inputNumber /= 10;
    }


    printf("%d\n", revereced);
} 
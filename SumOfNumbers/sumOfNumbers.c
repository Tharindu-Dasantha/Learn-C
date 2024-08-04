#include <stdio.h>


int main(void) {
    int inputNumber;
    printf("Enter a positive integer: ");
    scanf("%d", &inputNumber);

    if (inputNumber <= 0) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int sum = 0;
    while (inputNumber != 0) {
        sum += inputNumber % 10;
        inputNumber /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);
}
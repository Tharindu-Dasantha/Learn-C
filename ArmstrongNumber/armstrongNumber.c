#include <stdio.h>
#include <math.h>

int countingNumber(int);
int gettingTotal(int, int);

int main(void) {
    int inputNumber;
    int numberCount;
    int total;

    // Getting the user input
    printf("Enter a Number: ");
    if (scanf("%d", &inputNumber) == -1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    // getting the count of the number
    numberCount = countingNumber(inputNumber);

    // calculating the sum of digits after multiplying
    total = gettingTotal(inputNumber, numberCount);

    // Checking if its armstrong number or not
    if (total == inputNumber) {
        printf("%d is an Armstrong number.\n", inputNumber);
    } else {
        printf("%d is not an Armstrong number.\n", inputNumber);
    }

}


int countingNumber(int inputNumber) {
    int count = 0;
    int number = inputNumber;

    while (number!= 0) {
        number /= 10;
        count++;
    }

    return count;
}


int gettingTotal(int inputNumber, int numberCount) {
    int total = 0;
    int tmpnumber;

    while (inputNumber != 0) {
        tmpnumber = inputNumber % 10;
        total += pow(tmpnumber, numberCount);
        inputNumber /= 10;
    }

    return total;
}
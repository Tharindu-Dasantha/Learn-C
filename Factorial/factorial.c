#include <stdio.h>

void factorial(int);

int main(void)
{
    int number;
    printf("Enter a number: ");
        // getting the input
        if (scanf("%d", &number) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    factorial(number);
}

void factorial(int number)
{
    if (number == 0)
    {
        printf("Factorial: 1\n");
    }
    else
    {
        int total = 1;
        int tmpnumber = number;
        while (tmpnumber != 0) {
            total *= tmpnumber;
            tmpnumber--;
        }
        printf("Factorial: %d\n", total);
    }
}
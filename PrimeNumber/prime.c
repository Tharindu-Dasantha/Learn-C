#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // Getting user input number
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is greater than 1
    if (number <= 1)
    {
        printf("Not a prime number.\n");
        return 0;
    }
    else
    {
        // Checking if the number is prime or not
        int half = number / 2;
        for (int i = 2; i < half; i++)
        {
            if (number % i == 0)
            {
                // if devided then not a prime number
                printf("Not a prime number.\n");
                return 0;
            }
        }
        // then this is a prime number
        printf("This is a prime number.\n");
        return 1;
    }
}
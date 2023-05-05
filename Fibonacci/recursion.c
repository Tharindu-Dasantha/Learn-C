#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// calling functions
void fibonacci(int amount);

int main(void)
{
    // Geting a input
    int amount;
    // first two numbers of the fibonacci numbers
    int a = 0, b = 1;
    printf("Enter an integer: ");
    if (scanf("%d", &amount) != 1)
    {
        printf("Error: Invalid input\n");
    }
    // Get the number of fibonacci numbers using a function
    // printing the first numbers
    printf("%d, %d, ", a, b);
    fibonacci(amount - 2); // since first two numbers are alredy printed
    return 0;
}

void fibonacci(int amount)
{
    static int first = 0, second = 1, third;
    // looping till run out of the amouts
    if (amount > 0)
    {
        third = first + second;
        first = second;
        second = third;
        printf("%d, ", third);
        fibonacci(amount - 1);
    }
}
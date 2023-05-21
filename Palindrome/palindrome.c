#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // Get the user inputs
    int number;
    int reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);

    // hold the number in a tmp
    int tmp = number;

    // hold the number in reverse
    while (tmp != 0)
    {
        remainder = tmp % 10;
        reverse = reverse * 10 + remainder;
        tmp /= 10;
    }

    if (number == reverse) {
        printf("%d is a palindrome\n", number);
        return 0;
    }
    else {
        printf("%d is not a palindrome\n", number);
        return 1;
    }
}
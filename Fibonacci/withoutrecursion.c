#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int amount;
    printf("Enter the amount of money: ");
    scanf("%d", &amount);
    if (isdigit(amount) == 0)
    {
        int first = 0, second = 1, third;
        printf("%d, %d", first, second);
        for (int i = 0; i < (amount - 2); i++)
        {
            third = first + second;
            first = second;
            second = third;
            printf(", %d", third);
        }
    }
    else {
        printf("Invalid amount");
        return 1;
    }
}
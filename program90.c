#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Special case if number is 0
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;   // remove last digit
            count++;         // increase digit count
        }
    }

    printf("Number of digits = %d", count);

    return 0;
}

#include <stdio.h>
#include <math.h>

void check_last_digit_odd()
{
    int num, ones, count = 0, temp, first, middle;

    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    ones = num % 10;

    if (ones % 2 != 0)
    {
        int power = (int)pow(10, count - 1);

        first = num / power;
        first = first - 1;

        middle = num % power;

        int number = (first * power) + middle;

        printf("Odd number : %d\n", number);
    }
    else
    {
        printf("Even number : %d\n", num);
    }
}

int main()
{
    check_last_digit_odd();
    return 0;
}

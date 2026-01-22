#include <stdio.h>

int main()
{
    int num, sum, temp, digit, count = 0;

    for (num = 0; num < 100000; num++)
    {
        sum = 0;
        temp = num;

        for (; temp > 0; temp = temp / 10)
        {
            digit = temp % 10;
            sum = sum + digit;
        }

        if (sum == 14)
        {
            count++;
        }
    }

    printf("Total count: %d\n", count);

    return 0;
}

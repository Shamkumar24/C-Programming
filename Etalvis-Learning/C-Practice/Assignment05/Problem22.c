#include <stdio.h>

int main()
{
    int num = 12345678;
    int temp, last, prev, twoDigit, count = 0;

    temp = num;
    last = temp % 10;
    temp /= 10;

    for (; temp > 0; temp /= 10)
    {
        prev = temp % 10;
        twoDigit = prev * 10 + last;

        (twoDigit >= 10 && twoDigit <= 99 && twoDigit % 2 != 0) && (count++);

        last = prev;
    }

    printf("Total two-digit odd numbers = %d\n", count);

    return 0;
}

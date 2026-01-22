#include <stdio.h>

int main()
{
    long int num, temp;
    int d1, d2, twoDigit, count = 0;

    printf("Enter the number: ");
    scanf("%ld", &num);

    temp = num;

    for (; temp >= 10; temp /= 10)
    {
        d1 = temp % 10;
        d2 = (temp / 10) % 10;
        twoDigit = d2 * 10 + d1;

        if (twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
            twoDigit == 49 || twoDigit == 64 || twoDigit == 81)
        {
            count++;
        }
    }

    printf("Total two-digit perfect squares = %d\n", count);

    return 0;
}

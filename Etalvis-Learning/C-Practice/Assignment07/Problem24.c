#include <stdio.h>

void disp_two_digit_square()
{
    int num, twoDigit, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num >= 10)
    {
        twoDigit = num % 100;

        if (twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
            twoDigit == 49 || twoDigit == 64 || twoDigit == 81)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total : %d\n", count);
}

int main()
{
    disp_two_digit_square();
    return 0;
}

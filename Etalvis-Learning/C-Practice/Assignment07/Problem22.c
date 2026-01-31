#include <stdio.h>

void disp_total_2digit_odd()
{
    int num, twoDigit, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num >= 10)
    {
        twoDigit = num % 100;

        if (twoDigit % 2 != 0)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total : %d\n", count);
}

int main()
{
    disp_total_2digit_odd();
    return 0;
}

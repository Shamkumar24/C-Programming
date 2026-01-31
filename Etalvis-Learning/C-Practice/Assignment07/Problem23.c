#include <stdio.h>

void disp_single_digit_square()
{
    int num, ones, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        ones = num % 10;

        if (ones == 1 || ones == 4 || ones == 9)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total : %d\n", count);
}

int main()
{
    disp_single_digit_square();
    return 0;
}

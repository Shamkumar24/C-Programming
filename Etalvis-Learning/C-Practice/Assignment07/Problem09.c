#include <stdio.h>

void disp_2digit_ones5()
{
    int i, ones, sum = 0;

    for (i = 11; i <= 99; i++)
    {
        ones = i % 10;

        if (ones == 5)
        {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);
}

int main()
{
    disp_2digit_ones5();
    return 0;
}

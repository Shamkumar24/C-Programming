#include <stdio.h>

void disp_2digit_odd_sum7()
{
    int i, tens, sum = 0;

    for (i = 11; i <= 99; i++)
    {
        tens = i / 10;

        if (i % 2 != 0 && tens == 7)
        {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);
}

int main()
{
    disp_2digit_odd_sum7();
    return 0;
}

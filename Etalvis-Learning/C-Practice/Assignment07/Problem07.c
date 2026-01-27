#include <stdio.h>

void disp_2digit_odd_sum7()
{
    int i, ones, tens, result;

    for (i = 11; i <= 99; i++)
    {
        ones = i % 10;
        tens = i / 10;
        result = ones + tens;

        if (i % 2 != 0 && result == 7)
            printf("%d\n", i);
    }
}

int main()
{
    disp_2digit_odd_sum7();
    return 0;
}

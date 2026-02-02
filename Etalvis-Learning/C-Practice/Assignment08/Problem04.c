#include <stdio.h>

int disp_2digit_odd_sum_tens7(int num)
{
    int i, sum = 0;

    for (i = 11; i <= num; i++)
    {
        if (i % 2 != 0 && (i / 10) == 7)
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{
    int x = 99, result;

    result = disp_2digit_odd_sum_tens7(x);
    printf("The Sum : %d\n", result);

    return 0;
}

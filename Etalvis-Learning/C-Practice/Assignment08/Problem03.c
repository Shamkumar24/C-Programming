#include <stdio.h>

int disp_2digit_ones5(int num)
{
    int i, sum = 0;

    for (i = 11; i <= num; i++)
    {
        if (i % 10 == 5)
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{
    int x = 99, result;

    result = disp_2digit_ones5(x);
    printf("The Sum : %d\n", result);

    return 0;
}

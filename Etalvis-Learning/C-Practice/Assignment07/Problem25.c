#include <stdio.h>

void disp_2digit_even_sum6()
{
    int num = 1, count = 0;

    while (num < 10)
    {
        if (num == 2 || num == 3 || num == 5 || num == 7)
        {
            count++;
        }
        num = num + 1;
    }

    printf("Total : %d\n", count);
}

int main()
{
    disp_2digit_even_sum6();
    return 0;
}

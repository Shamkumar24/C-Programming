#include <stdio.h>

void disp_count_sum14()
{
    int num = 100000, sum, temp, count = 0;

    for (int i = 10; i < num; i++)
    {
        temp = i;
        sum = 0;

        while (temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }
    }

    printf("Count : %d\n", count);
}

int main()
{
    disp_count_sum14();
    return 0;
}

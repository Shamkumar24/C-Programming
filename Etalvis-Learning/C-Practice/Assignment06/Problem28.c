#include <stdio.h>

int main()
{
    int sum, count = 0, num = 0, temp;

    while (num < 100000)
    {
        sum = 0;
        temp = num;

        while (temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if (sum == 14)
            count++;

        num++;
    }

    printf("%d\n", count);

    return 0;
}

#include <stdio.h>

int main()
{
    int i, ones, sum = 0;

    for (i = 11; i <= 100; i++)
    {
        ones = i % 10;

        if (ones == 5)
        {
            sum = sum + i;
        }
    }

    printf("Sum : %d\n", sum);

    return 0;
}

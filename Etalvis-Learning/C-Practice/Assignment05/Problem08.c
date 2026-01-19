#include <stdio.h>

int main()
{
    int i, ones, tens, sum;

    for (i = 11; i <= 100; i++)
    {
        ones = i % 10;
        tens = i / 10;
        sum = ones + tens;

        if ((i % 2) == 0 && sum == 6)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i = 11, ones, sum = 0;

    while (i < 100)
    {
        ones = i % 10;

        if (ones == 5)
            sum = sum + i;

        i++;
    }

    printf("Sum : %d\n", sum);

    return 0;
}

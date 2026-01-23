#include <stdio.h>

int main()
{
    int i = 11, ones, tens, sum;

    while (i < 100)
    {
        ones = i % 10;
        tens = i / 10;
        sum = tens + ones;

        if ((i % 2) != 0 && sum == 7)
            printf("%d\n", i);

        i++;
    }

    return 0;
}
